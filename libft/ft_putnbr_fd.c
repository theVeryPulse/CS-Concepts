/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:32:53 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 13:53:57 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the integer ’n’ to the given file descriptor. */

/* last tested: 04/11/2023 */

#include "libft.h"

static int	my_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n / 10 == 0)
	{
		ft_putchar_fd((my_abs(n) + '0'), fd);
	}
	else
	{
		ft_putnbr_fd(my_abs(n / 10), fd);
		ft_putnbr_fd(my_abs(n % 10), fd);
	}
}
/*
#include <limits.h>
#include <unistd.h>

int	main(void)
{
	int	n;

	n = INT_MAX;
	ft_putnbr_fd(n, 1);
	write(1, "\n", 1);
	n = INT_MIN;
	ft_putnbr_fd(n, 1);
	write(1, "\n", 1);
	for (int i = -50; i <= 50; i++)
	{
		ft_putnbr_fd(i, 1);
		write(1, "\n", 1);
	}
}
*/
