/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:42:36 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 21:34:51 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

/*	05/11/2023
	Bug fix: return a unique pointer which can be freed when input is 0
*/
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ary;
	size_t	i;
	size_t	bsize;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
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
	size_t nmemb = 0;
	size_t size = 0;
	str = (char *)calloc(nmemb, size);
	str1 = (char *)ft_calloc(nmemb, size);
	printf("c:  %p\nft: %p\n", str, str1);
	free(str);
	free(str1);
}
*/
