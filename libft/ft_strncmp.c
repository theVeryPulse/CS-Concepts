/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:46 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 15:11:48 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
	char *str1 = "abcdE";
	int n = 4;
	printf("str0: %s\nstr1: %s\n", str0, str1);
	printf("Should be %d\n", strncmp(str0, str1, n));
	printf("is now    %d\n", ft_strncmp(str0, str1, n));
}
*/