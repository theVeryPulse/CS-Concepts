/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:07:27 by juli              #+#    #+#             */
/*   Updated: 2023/10/31 19:07:28 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	new = (char *)malloc(i);
	if (new == NULL)
		return (NULL);
	while (i >= 1)
	{
		new[i] = s[i];
		i--;
	}
	new[i] = s[i];
	return (new);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "";
	printf
	(
		"c:  %s\n"
		"ft: %s\n",
		strdup(str), ft_strdup(str)
	);
}
*/
