/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:37:41 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 21:23:23 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 05/11/2023 */

/*	05/11/2023
	Bug fix: when {size} is wrong or dst does not null-terminate, follow strlcpy
*/
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	total_len;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_len = ft_strlen(dst);
	if (dst_len != i)
		dst_len = size;
	total_len = dst_len + ft_strlen((char *)src);
	if (size == 0)
		return (total_len);
	i = 0;
	j = 0;
	while (i < size - 1 && dst[i])
		i++;
	while (i < size - 1 && src[j])
		dst[i++] = src[j++];
	if (i >= dst_len)
		dst[i] = '\0';
	return (total_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char dst[10] = "abc";
	memset(dst, 'A', 10);
	char src[] = "AAAA";
	size_t size = 1;
	printf("ft: %zu: %s\n", ft_strlcat(dst, src, size), dst);

	char dst1[10] = "abc";
	memset(dst1, 'A', 10);
	printf("c:  %zu: %s\n", strlcat(dst1, src, size), dst1);
	for (int i = 0; i <= 9; i++)
	{
		printf("(%s)\t\t(%s)\n", &dst[i], &dst1[i]);
	}
}
*/
