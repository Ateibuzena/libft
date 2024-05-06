/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:43:57 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 12:59:06 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, t_size n)
{
	t_size			i;
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	i = 0;
	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*ptrs1 != *ptrs2)
			return (*ptrs1 - *ptrs2);
		ptrs1++;
		ptrs2++;
		i++;
	}
	return (0);
}

/*
This function, ft_memcmp, compares the first n bytes of two memory blocks
 s1 and s2.

Initialization:
It initializes variables i, ptrs1, and ptrs2. ptrs1 and ptrs2 are 
pointers to unsigned characters representing the memory blocks s1 and s2,
 respectively. i is used as a counter to iterate through the memory blocks.
Byte Comparison:
It iterates through the memory blocks using a while loop until it reaches
 the end of either block or n bytes, whichever comes first.
It compares each byte of the memory blocks at the corresponding positions.
Comparison:
If a difference is found between the bytes at the current positions, 
it returns the difference between the values of the bytes.
Equality:
If the loop completes without finding any differences, it returns 0, 
indicating that both memory blocks are equal up to the first n bytes.
Return Value:
Returns a negative value if the first differing byte in s1 is less than 
the corresponding byte in s2.
Returns a positive value if the first differing byte in s1 is greater 
than the corresponding byte in s2.
Returns 0 if both memory blocks are equal up to the first n bytes.
*/