/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:42:53 by juli              #+#    #+#             */
/*   Updated: 2023/11/08 18:05:09 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Parameters
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.
	del: The address of the function used to delete the content of a node if 
	needed.

	Return value
	The new list. NULL if the allocation fails.

	External functs
	malloc, free

	Description
	Iterates the list 'lst' and applies the function 'f' on the content of each
	node. Creates a new list resulting of the successive applications of the 
	function 'f'. The 'del' function is used to delete the content of a node if
	needed.
*/

/*	08/11/2023
	Bug fix
	- return NULL if any of the input is NULL
	- clear the space if the target string cannot be built, and return NULL
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
