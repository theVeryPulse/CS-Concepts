/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:47:41 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:23:02 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	for(int i = 0; i <= 150; i++)
	{
		if (isascii(i))
			printf("ascii:    %d (%c)\n", i, i);
		if (ft_isascii(i))
			printf("ft_ascii: %d (%c)\n", i, i);
	}
	return (0);
}
*/
