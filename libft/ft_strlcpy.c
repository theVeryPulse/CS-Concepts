/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:16:27 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 17:37:28 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 05/11/2023 */

#include <stddef.h>
#include "libft.h"

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
	char dst[4] = "abc";
	char src[] = "AAAAAAAAAAAAAAAAAAAAAAAAAA";
	printf("%zu: %s\n", ft_strlcpy(dst, src, 4), dst);

	char dst1[4] = "abc";
	printf("%zu: %s\n", strlcpy(dst1, src, 4), dst1);
}
*/
