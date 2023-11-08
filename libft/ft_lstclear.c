/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Philip Li <LJHR.UK@outlook.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:08:18 by Philip Li         #+#    #+#             */
/*   Updated: 2023/11/08 01:08:18 by Philip Li        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Parameters
	lst: The address of a pointer to a node.
	del: The address of the function used to delete the content of the node.

	External functs
	free()

	Description
	Deletes and frees the given node and every successor of that node, using the 
	function 'del' and free().Finally, the pointer 	to the list must be set to 
	NULL.
*/

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	while (current != NULL)
	{
		next = (current)->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
