/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:49:21 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:23:39 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
This function, ft_putendl_fd, writes the string s followed by a newline 
character ('\n') to the specified file descriptor fd.

Writing String:
It uses the write system call to write the entire string s to the file 
descriptor fd.
The write function writes the number of bytes equal to the length of 
the string s, obtained using ft_strlen, starting from the address of 
the string s.
Writing Newline:
It writes a single newline character ('\n') to the file descriptor fd 
using the write function.
*/