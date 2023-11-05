/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:16:27 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 20:39:38 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 05/11/2023 */

/*	05/11/2023
	Bug fix: do nothing when input {size} equals to 0
*/

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	total_len;

	i = 0;
	total_len = ft_strlen((char *)src);
	if (size == 0)
		return (total_len);
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
	char dest[10]; 
	memset(dest, 'A', 10);
	char dest1[10]; 
	memset(dest1, 'A', 10);
	char src[] = "012345";
	size_t size = -1;

	printf("ft: %zu: (%s)\n", ft_strlcpy(dest, src, size), dest);
	printf("c:  %zu: (%s)\n", strlcpy(dest1, src, size), dest1);
}
*/
