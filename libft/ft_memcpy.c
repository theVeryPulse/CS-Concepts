/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:01:51 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:42:24 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[10] = "abcd";
	char *src = "AAAAAAAAAA";
	ft_memcpy(&dest[4], dest, 5);

	char dest1[10] = "abcd";
	char *src1 = "AAAAAAAAAA";
	memcpy(&dest1[4], dest, 5);

	printf("ft: %s\n", dest);
	printf("c:  %s\n", dest1);
}
*/
