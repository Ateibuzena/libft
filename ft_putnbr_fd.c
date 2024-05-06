/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:52:45 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:24:45 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	c;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = -i;
	}
	if (i / 10 != 0)
		ft_putnbr_fd(i / 10, fd);
	c = i % 10 + 48;
	write(fd, &c, 1);
}

/*
This function, ft_putnbr_fd, writes the integer n to the specified file 
descriptor fd.

Handling Negative Numbers:
It checks if the integer n is negative.
If n is negative, it writes a minus sign ('-') to the file descriptor 
fd and converts n to its absolute value.
Recursive Call:
It recursively calls ft_putnbr_fd with the absolute value of n divided 
by 10 until the quotient becomes 0.
This recursive call processes the digits of the integer in reverse order.
Converting Digits to Characters:
It calculates the character representation of each digit by taking the 
remainder of n divided by 10 and adding it to ASCII value 48 ('0').
This converts the digit into its character representation.
Writing Characters:
It writes each digit character to the file descriptor fd using the write 
system call.
*/