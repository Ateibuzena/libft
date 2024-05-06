/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:32:13 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 12:57:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, t_size n)
{
	unsigned char	*ptr;
	t_size			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
		i++;
	}
	return (0);
}

/*
This function, ft_memchr, searches for the first occurrence of a byte c in 
the first n bytes of the memory block pointed to by s.

Initialization:
It initializes variables ptr and i. ptr is a pointer to an unsigned char 
representing the memory block s. i is used as a counter to iterate 
through the memory block.
Byte Comparison:
It iterates through the memory block using a while loop until it reaches 
the end of the block or n bytes, whichever comes first.
It compares each byte of the memory block with the byte c.
Matching Byte:
If a match is found, it returns a pointer to the location of the first 
occurrence of the byte c in the memory block.
No Match Found:
If no match is found after iterating through the entire memory block, 
it returns NULL.
Return Value:
Returns a pointer to the first occurrence of the byte c in the memory 
block s if found, otherwise returns NULL.
*/