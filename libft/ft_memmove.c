/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:10:50 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 19:13:02 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* last tested on 04/11/2023 */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest > src)
	{
		i = n - 1;
		while (i > 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
		((char *)dest)[0] = ((char *)src)[0];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[10] = "012345678";
	ft_memmove(&dest[3], &dest[1], 4);

	char dest1[10] = "012345678";
	memmove(&dest1[3], &dest1[1], 4);
	
	char dest2[10] = "012345678";
	ft_memmove(&dest2[1], &dest2[3], 4);

	char dest3[10] = "012345678";
	memmove(&dest3[1], &dest3[3], 4);


	printf("ft: %s\n", dest);
	printf("c:  %s\n", dest1);
	printf("ft: %s\n", dest2);
	printf("c:  %s\n", dest3);

}
*/
