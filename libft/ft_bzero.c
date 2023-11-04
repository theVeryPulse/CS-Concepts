/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:56:22 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:37:30 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "abcdef";
	ft_bzero(str, 2);
	char str1[] = "abcdef";
	bzero(str1, 2);
	for (int i = 0; i <= 6; i++)
		printf("(%c)\n", str[i]);
	for (int i = 0; i <= 6; i++)
		printf("(%c)\n", str1[i]);
}
*/
