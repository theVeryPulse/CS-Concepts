/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:00:29 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 10:04:04 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the character 'c' to the given file descriptor. */

/* tested on 04/11/2023 */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int screen = 1;
	int error = 2;
	ft_putchar_fd('s', screen);
	ft_putchar_fd('e', error);
}
*/
