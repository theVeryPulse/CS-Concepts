#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define GREEN "\x1B[32m"
#define RED "\x1B[31m"
#define RESET_COLOR "\x1B[0m"

int main(void)
{
	t_list *head;
	char *msg0;
	char *msg1;
	char *msg2;

	char *ok = (GREEN "OK " RESET_COLOR);
	char *ko = (RED "KO " RESET_COLOR);

	/* ft_lstnew */
	printf("ft_lstnew\t: ");
	char *str = "the data";
	head = ft_lstnew(str);
	msg0 = (head->next == NULL) ? ok : ko;
	msg1 = (strcmp(str, head->content) == 0) ? ok : ko;
	free(head);
	printf("1.%s 2.%s\n", msg0, msg1);

	/* ft_lstadd_front */
	printf("ft_lstadd_front\t: ");
	head = ft_lstnew("old head");
	t_list *new_head = ft_lstnew("new head");
	ft_lstadd_front(&head, new_head);
	msg0 = (strcmp(head->content, "new head") == 0) ? ok : ko;
	msg1 = (head == new_head && head->next->next == NULL) ? ok : ko;
	msg2 = (strcmp(head->next->content, "old head") == 0) ? ok : ko;
	printf("1.%s 2.%s 3.%s\n", msg0, msg1, msg2);
	free(head->next);
	free(head);

	/* ft_lstadd_front */
	printf("ft_lstsize\t: ");
	t_list *lst0 = ft_lstnew("0");
	t_list *lst1 = ft_lstnew("1");
	t_list *lst2 = ft_lstnew("2");
	head = lst0;
	msg0 = (ft_lstsize(head) == 1) ? ok : ko;
	ft_lstadd_front(&head, lst1);
	ft_lstadd_front(&head, lst2);
	msg1 = (ft_lstsize(head) == 3) ? ok : ko;
	// printf("len: %d\n", ft_lstsize(head));
	printf("1.%s 2.%s\n", msg0, msg1);
	free(lst0);
	free(lst1);
	free(lst2);

	/* ft_lstlast */
	printf("ft_lstlast\t: ");
	lst0 = ft_lstnew((void*)1);
	lst1 = ft_lstnew((void*)2);
	lst2 = ft_lstnew((void*)3);
	head = lst0;
	ft_lstadd_back(&head, lst1);
	ft_lstadd_back(&head, lst2);
	msg0 = (ft_lstlast(head) == lst2) ? ok : ko;
	msg1 = (ft_lstlast(head)->content == (void*)3) ? ok : ko;
	printf("1.%s 2.%s\n", msg0, msg1);
	free(lst0);
	free(lst1);
	free(lst2);

	/* ft_lstadd_back */
	printf("ft_lstadd_back\t: ");
	lst0 = ft_lstnew("0");
	lst1 = ft_lstnew("1");
	lst2 = ft_lstnew("2");
	head = lst0;
	ft_lstadd_back(&head, lst1);
	ft_lstadd_back(&head, lst2);
	msg0 = (ft_lstlast(head) == lst2) ? ok : ko;
	printf("1.%s\n", msg0);
	free(lst0);
	free(lst1);
	free(lst2);

	/* ft_lstdelone */
	printf("ft_lstdelone\t: ");
	lst0 = ft_lstnew(malloc(1));
	ft_lstdelone(lst0, free);
	msg0 = ok;
	printf("1.%s\n", msg0);

	/* ft_lstclear */
	printf("ft_lstclear\t: ");
	lst0 = ft_lstnew(malloc(1));
	lst1 = ft_lstnew(malloc(1));
	lst2 = ft_lstnew(malloc(1));
	head = lst0;
	ft_lstadd_back(&head, lst1);
	ft_lstadd_back(&head, lst2);
	ft_lstclear(&head, free);
	msg0 = (head == NULL) ? ok : ko;
	printf("1.%s\n", msg0);
}
