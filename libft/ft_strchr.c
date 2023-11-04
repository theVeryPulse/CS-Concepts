/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 12:33:34 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 19:45:17 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* last tested on 04/11/2023 */

/*	LOG
	Bug fixed: return terminator if looking for '\0'
*/

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
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <string.h>

int	main(void)
{
	char *str = "abcdefg";
	char c = '0';
	printf("ft: (%c) in (%s): %s\n", c, str, ft_strchr(str, c));
	printf("c:  (%c) in (%s): %s\n", c, str, strchr(str, c));
}
*/
