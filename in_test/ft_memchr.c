/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:34:23 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 15:34:25 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char *str = "abcdef";
	char c = 'a';
	printf
	(
		"should be {%s}\n"
		"is now    {%s}\n",
		(char *)memchr((str), c, 3),
		(char *)ft_memchr((str), c, 3)
	);
}
*/