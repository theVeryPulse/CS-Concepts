/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:42:36 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 20:41:46 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ary;
	size_t	i;
	size_t	bsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bsize = nmemb * size;
	if (bsize < nmemb || bsize < size)
		return (NULL);
	ary = (char *)malloc(bsize);
	if (ary == NULL)
		return (NULL);
	i = 0;
	while (i < bsize)
		ary[i++] = 0;
	return ((void *)ary);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str;
	char *str1;
	size_t nmemb = 4;
	size_t size = 4;
	str = (char *)calloc(nmemb, size);
	str1 = (char *)ft_calloc(nmemb, size);
	printf("c:  %zu\nft: %zu\n", sizeof(str), sizeof(str1));
}
*/
