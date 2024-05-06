/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:49:04 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:58:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *array, t_size len)
{
	ft_memset(array, 0, len);
}

/*
This function, ft_bzero, sets the first len bytes of the memory block 
pointed to by array to zero. It achieves this by calling the ft_memset 
function with the specified array, value of 0, and len.

Here's a breakdown of what each part of the function does:

ft_memset(array, 0, len);: Calls the ft_memset function to set the first 
len bytes of the memory block pointed to by array to zero. The ft_memset 
function is responsible for performing the byte-wise zeroing operation.
In summary, this function serves as a wrapper for the ft_memset function, 
specifically designed to zero out a memory block by setting its bytes to zero.
*/