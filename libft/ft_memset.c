/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:00:21 by juli              #+#    #+#             */
/*   Updated: 2023/10/30 17:56:05 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		((char *)s)[i++] = c;
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "abcdef";
	ft_memset(str, '!', 4);
	printf("%s\n",str);
}
*/
