/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:06:55 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:25:41 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size count, t_size size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size * count);
	return (ptr);
}

/* Allocates memory for an array of count elements of size bytes 
each and initializes the memory to zero.
Uses malloc to allocate memory for the array.
If malloc fails to allocate memory, returns NULL.
Otherwise, uses ft_memset to initialize the allocated memory to zero.
Parameters:
- count: Number of elements in the array.
- size: Size of each element in bytes.
Returns:
- Pointer to the allocated memory, or NULL if allocation fails. */
