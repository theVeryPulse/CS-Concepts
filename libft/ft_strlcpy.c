/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:16:27 by juli              #+#    #+#             */
/*   Updated: 2023/10/30 18:23:20 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dst[10] = "abc";
	char src[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
	printf("%zu: %s\n", ft_strlcpy(dst, src, (size_t)10), dst);

	char dst1[10] = "abc";
	printf("%zu: %s\n", strlcpy(dst1, src, 10), dst1);
}
*/