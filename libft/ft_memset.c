/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:00:21 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 18:32:52 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

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
	printf("ft: %s\n",str);
	char str1[] = "abcdef";
	memset(str1, '!', 4);
	printf("c:  %s\n",str1);
}
*/
