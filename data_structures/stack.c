/**
 * https://www.coursera.org/lecture/data-structures/stacks-UdKzQ
 * 
 * Stack: LIFO (last-in-first-out )
 * 
 * stack_push(content): adds content to stack
 * stack_pop(): removes and returns most recently-added key
 */

/********************************\
    Linked List Implementation    
\********************************/

#include <stdlib.h>

typedef struct s_stack t_stack;

struct s_stack
{
	t_stack	*next;
	void	*content;
};

void	stack_push(t_stack **stack, void *content)
{
	t_stack *new_node;

	if (!stack)
		return;
	new_node = (t_stack *)calloc(1, sizeof(t_stack));
	new_node->content = content;
	if (!(*stack))
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *stack;
	}
	*stack = new_node;
}

t_stack	*stack_pop(t_stack **stack)
{
	t_stack	*node_to_pop;

	if (!stack || !(*stack))
		return (NULL);
	node_to_pop = *stack;
	*stack = (*stack)->next;
	return (node_to_pop);
}

/* #include <stdio.h>

int main(int argc, char const *argv[])
{
	char a = 'a';
	char b = 'b';
	char c = 'c';
	t_stack *stack = NULL;
	t_stack *node;

	stack_push(&stack, &a);
	stack_push(&stack, &b);
	stack_push(&stack, &c);
	for (int i = 0; i < 3; i++)
	{
		node = stack_pop(&stack);
		printf("%c\n", *(char *)(node->content));
		free(node);
		node = NULL;
	}
	return 0;
} */

