/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:40:23 by juli              #+#    #+#             */
/*   Updated: 2023/11/03 19:46:01 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* tested: 03/11/2023 */

#include <stdlib.h>

static size_t	ft_strlen(char *str);

static size_t	ft_strlcpy(char *dst, const char *src, size_t size);

static void		re_itoa(long num, char *ary);

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	total_len;

	i = 0;
	total_len = (size_t)ft_strlen((char *)src);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (total_len);
}

static size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static void	re_itoa(long num, char *ary)
{
	static int	j = 0;

	if (ary[j] == '-')
		j++;
	if (num / 10 == 0)
		ary[j++] = num + '0';
	else
	{
		re_itoa(num / 10, ary);
		ary[j++] = num % 10 + '0';
	}
}

char	*ft_itoa(int n)
{
	int		i;
	char	ary[40];
	char	*out;
	long	num;

	i = 0;
	while (i < 40)
		ary[i++] = '\0';
	num = n;
	if (num < 0)
	{
		num = -num;
		ary[0] = '-';
	}
	re_itoa(num, ary);
	out = (char *)malloc((ft_strlen(ary) + 1) * sizeof(char));
	ft_strlcpy(out, ary, 40);
	return (out);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int num = 5000;
	printf("%d (int)\n%s (char[])\n", num, ft_itoa(num));
	return (0);
}
*/
