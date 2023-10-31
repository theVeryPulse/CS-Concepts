/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:57:51 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 15:59:09 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((char *)s1)[i] && i < n)
	{
		if (((char *)s1)[i] != ((char *)s2)[i])
			return (((char *)s1)[i] - ((char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str0 = "abcde";
	char *str1 = "abcde";
	int n = 5;
	printf("str0: %s\nstr1: %s\n", str0, str1);
	printf("Should be %d\n", memcmp(str0, str1, n));
	printf("is now    %d\n", ft_memcmp(str0, str1, n));
}
*/
