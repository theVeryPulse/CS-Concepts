/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:34 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 12:33:37 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		s++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "abcdefg";
	char c = 'f';
	printf("Find (%c) in (%s): %s", c, str, ft_strchr(str, c));
}
*/