/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:09:09 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 20:25:33 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && big[i + j]
			&& i + j < len)
			j++;
		if (little[j] == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char *big = "abcdefghi";
	const char *little = "def";
	int len = 4;

	char *my_val = ft_strnstr(big, little, len);
	char *c_val = strnstr(big, little, len);

	printf
	(
		"big:       {%s}\n"
		"little:    {%s}\n\n", big, little
	);
	printf("Should be: {%s}\n", c_val);
	printf("is now:    {%s}\n", my_val);
}
*/
