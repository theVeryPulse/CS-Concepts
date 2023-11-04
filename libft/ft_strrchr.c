/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:27:24 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 14:27:25 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		i--;
		if (s[i] == c)
			return ((char *)&s[i]);
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "abfcdefg";
	char c = 'f';
	printf("Find (%c) in (%s): %s", c, str, ft_strrchr(str, c));
}
*/