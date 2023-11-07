/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:33:11 by juli              #+#    #+#             */
/*   Updated: 2023/11/07 19:33:12 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Parameters
	lst: The address of a pointer to the first link of a list.
	new: The address of a pointer to the node to be added to the list.

	Description
	Adds the node 'new' at the end of the list.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}
