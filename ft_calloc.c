/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:06:55 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:09:15 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(t_size count, t_size size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

/*
This function, ft_calloc, allocates memory for an array of count 
elements, each of size size bytes, and initializes all the bytes to zero.

Memory Allocation:
It allocates memory for the array using malloc, with the total size 
calculated as size * count.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns 
NULL, indicating failure, it returns NULL.
Memory Initialization:
It initializes all the bytes of the allocated memory to zero using 
ft_memset.
Return Value:
Returns a pointer to the allocated and initialized memory block.
*/