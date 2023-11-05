/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:27:24 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 18:29:22 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 05/11/2023 */

/*	LOG

	05/11/2023
	Bug fix: handle overflow -> int c as char

	04/11/2023
	Bug fix: return terminator if looking for '\0'
*/

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char *str = "abfcdefg";
	char c = '0';
	printf("Find (%c) in (%s): (%s)\n", c, str, ft_strrchr(str, c));
	printf("Find (%c) in (%s): (%s)\n", c, str, strrchr(str, c));
}
*/
