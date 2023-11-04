/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:05:21 by juli              #+#    #+#             */
/*   Updated: 2023/11/04 10:31:04 by juli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string 's' to the given file descriptor. */

/* tested on 04/11/2023 */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}
/*
int	main(void)
{
	int screen = 1;
	int error = 2;
	ft_putstr_fd("screen\n", screen);
	ft_putstr_fd("error\n", error);
}
*/
