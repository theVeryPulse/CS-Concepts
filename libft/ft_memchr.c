/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:34:23 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 17:38:35 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str = "abcdef";
	char c = 'c';
	printf
	(
		"should be {%s}\n"
		"is now    {%s}\n",
		(char *)memchr((str), c, 3),
		(char *)ft_memchr((str), c, 3)
	);
}
*/
