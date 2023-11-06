/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:07:27 by juli              #+#    #+#             */
/*   Updated: 2023/11/05 22:27:37 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last test on 05/11/2023 */

/*	05/11/2023
	Bug fix: memory leak -> always null terminate the duplicate string
*/

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "abc";
	printf
	(
		"c:  %s\n"
		"ft: %s\n",
		strdup(str), ft_strdup(str)
	);
}
*/
