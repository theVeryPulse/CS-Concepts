/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:33:50 by juli              #+#    #+#             */
/*   Updated: 2023/11/08 18:07:47 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Parameters
	lst: The address of a pointer to a node.
	f: The address of the function used to iterate on the list.

	Description
	Iterates the list 'lst' and applies the function 'f' on the content of each 
	node.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
