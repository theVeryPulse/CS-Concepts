/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:37:41 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 19:30:17 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total_len;

	i = 0;
	j = 0;
	total_len = (size_t)ft_strlen((char *)dst) + (size_t)ft_strlen((char *)src);
	while (i < size - 1 && dst[i])
		i++;
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (total_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dst[10] = "abc";
	char src[] = "AAAA";
	printf("%zu: %s\n", ft_strlcat(dst, src, 10), dst);

	char dst1[10] = "abc";
	printf("%zu: %s\n", strlcat(dst1, src, 10), dst1);
	for (int i = 0; i <= 9; i++)
	{
		printf("%s\t\t%s\n", &dst[i], &dst1[i]);
	}
}
*/
