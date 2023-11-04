/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:42:36 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 18:42:37 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ary;
	size_t	i;
	size_t	bsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	bsize = nmemb * size;
	if (bsize < nmemb || nmemb < size)
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
	size_t nmemb = -10;
	size_t size = -10;
	str = (char *)calloc(nmemb, size);
	str1 = (char *)ft_calloc(nmemb, size);
	printf("c:  %s\nft: %s\n", str, str1);
}
*/
