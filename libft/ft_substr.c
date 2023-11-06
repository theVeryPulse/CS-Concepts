/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:27:11 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 16:27:13 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Allocates (with malloc(3)) and returns a substring from the string 's'.
	The substring begins at index 'start' and is of maximum size 'len'.*/

/*	06/11/2023
	return an empty string when any parameter is incorrect inpust
*/

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	newlen;

	if (start >= ft_strlen(s) || len == 0)
		return ((char *)ft_calloc(1, 1));
	newlen = ft_strlen(&s[start]);
	if (newlen > len)
		newlen = len;
	newstr = (char *)malloc((newlen + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < newlen)
	{
		newstr[i] = s[start + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
#include <stdio.h>

int	main(void)
{
	char *s = "0123456789";
	unsigned int start = 1;
	size_t len = 1;
	printf("%s\n", ft_substr(s, start, len));
}
*/
