/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:27:46 by juli              #+#    #+#             */
/*   Updated: 2023/11/08 18:06:14 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Applies the function 'f' on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to ’f’ to be modified if necessary. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	my_func(unsigned int i, char* c)
{
	printf("My inner function: index = %d and %c\n", i, *c);
	*c -= 32;
}

int main()
{
	char str[10] = "hello";
	printf("The result is %s\n", str);
	ft_striteri(str, my_func);
	printf("The result is %s\n", str);
	return 0;
}
*/
