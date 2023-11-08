/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:44:18 by juli              #+#    #+#             */
/*   Updated: 2023/11/07 15:44:21 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Description
	Allocates (with malloc(3)) and returns a new node. The member variable 
	'content' is initialized with the value of the parameter 'content'. The 
	variable 'next' is initialized to NULL.
*/

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
