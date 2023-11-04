/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:40:23 by juli              #+#    #+#             */
/*   Updated: 2023/11/03 23:37:25 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tested: 03/11/2023 */

#include <stdlib.h>
#include "libft.h"

static size_t	*re_itoa(long num, char *ary)
{
	static size_t	j = 0;

	if (ary[j] == '-')
		j++;
	if (num / 10 == 0)
		ary[j++] = num + '0';
	else
	{
		re_itoa(num / 10, ary);
		ary[j++] = num % 10 + '0';
	}
	return (&j);
}

char	*ft_itoa(int n)
{
	int		i;
	char	ary[40];
	char	*out;
	long	num;
	size_t	*j;

	i = 0;
	while (i < 40)
		ary[i++] = '\0';
	num = n;
	if (num < 0)
	{
		num = -num;
		ary[0] = '-';
	}
	j = re_itoa(num, ary);
	*j = 0;
	out = (char *)malloc((ft_strlen(ary) + 1) * sizeof(char));
	ft_strlcpy(out, ary, (ft_strlen(ary) + 1));
	return (out);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int num = 50000;
	printf("%d (int)\n%s (char[])\n", num, ft_itoa(num));
	num = INT_MIN;
	printf("%d (int)\n%s (char[])\n", num, ft_itoa(num));
	num = INT_MAX;
	printf("%d (int)\n%s (char[])\n", num, ft_itoa(num));
	return (0);
}
*/
