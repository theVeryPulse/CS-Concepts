/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:53:12 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:30:21 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str = "abcdef";
	printf
	(
		"the string: (%s)\n"
		"c_len: (%zu)\n"
		"ft_len:(%zu)\n", 
		str,
		strlen(str),
		ft_strlen(str)
	);
}
*/
