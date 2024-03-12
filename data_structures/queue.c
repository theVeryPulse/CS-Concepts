/**
 * https://www.coursera.org/lecture/data-structures/queues-EShpq
 * 
 * Queue: FIFO (first-in-first-out )
 * 
 * enqueue(content): adds content to queue
 * dequeue(): removes and returns least-recently added content
 */

/********************************\
    Linked List Implementation    
\********************************/

#include <stdbool.h>
#include <stdlib.h>

typedef struct s_queue t_queue;
typedef struct s_qnode t_qnode;

struct s_qnode
{
	void	*content;
	t_qnode	*next;
	t_qnode	*prev;
};

struct s_queue
{
	t_qnode	*head;
	t_qnode	*tail;
};

void	queue_init(t_queue *queue)
{
	if (!queue)
		return;
	queue->head = NULL;
	queue->tail = NULL;
}

void	enqueue(t_queue *queue, void *content)
{
	t_qnode	*new_node;

	if (!queue || !content)
		return;
	new_node = (t_qnode *)malloc(sizeof(t_qnode));
	new_node->content = content;
	new_node->next = NULL;
	if (!queue->head)
	{
		new_node->prev = NULL;
		queue->head = new_node;
		queue->tail = new_node;
	}
	else
	{
		new_node->prev = queue->tail;
		queue->tail->next = new_node;
		queue->tail = new_node;
	}
}

void	*dequeue(t_queue *queue)
{
	t_qnode	*head_node;
	void	*content;

	if (!queue)
		return (NULL);
	head_node = queue->head;
	queue->head = queue->head->next;
	if (queue->head)
		queue->head->prev = NULL;
	else
		queue_init(queue);
	content = head_node->content;
	free(head_node);
	return (content);
}

bool	queue_empty(t_queue *queue)
{
	if (!queue)
		return (true);
	if (queue->head == NULL && queue->tail == NULL)
		return (true);
	else
		return (false);
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	t_queue queue;
	char *ptr;

	queue_init(&queue);
	printf("Queue empty: %d\n", queue_empty(&queue));
	enqueue(&queue, &a);
	enqueue(&queue, &b);
	enqueue(&queue, &c);
	for (int i = 0; i < 3; i++)
	{
		ptr = dequeue(&queue);
		printf("%c\n", *ptr);
		printf("Queue empty: %d\n", queue_empty(&queue));
	}
	printf("Queue empty: %d\n", queue_empty(&queue));
	return (0);
}


