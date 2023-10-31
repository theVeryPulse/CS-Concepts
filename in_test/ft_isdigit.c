/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:35:45 by juli              #+#    #+#             */
/*   Updated: 2023/10/30 16:41:22 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;

	c = '9';
	int r0 = isdigit(c);
	int r1 = ft_isdigit(c);
	printf("should be (%d), is now (%d)", isdigit(c), ft_isdigit(c));
}
*/
