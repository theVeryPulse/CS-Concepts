/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:26:30 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 10:32:15 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string 's' to the given file descriptor followed by a newline */

/*	06/11/2023
	Bug fix: write newline character to designated file descriptor
*/

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	int screen = 1;
	int error = 2;
	ft_putendl_fd("screen", screen);
	ft_putendl_fd("error", error);
}
*/
