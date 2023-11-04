/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:49:53 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:27:13 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	for (int i = 0; i <= 130; i++)
	{
		if (isprint(i))
			printf("isprint:    %d\n", i);
		if (ft_isprint(i))
			printf("ft_isprint: %d\n", i);
	}
	return (0);
}
*/
