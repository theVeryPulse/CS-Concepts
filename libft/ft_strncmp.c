/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:46 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 20:12:54 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 05/11/2023 */

/*	LOG

	05/11/2023
	Bug fix: when n is greater than length of both strings
*/

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str0 = "1238";
	char *str1 = "1235";
	size_t n = 4;
	printf("str0: %s\nstr1: %s\n", str0, str1);
	printf("Should be %d\n", strncmp(str0, str1, n));
	printf("is now    %d\n", ft_strncmp(str0, str1, n));
}
*/
