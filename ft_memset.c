/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:57:54 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:56:53 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int value, t_size len)
{
	t_size			i;	
	unsigned char	*ptr;

	ptr = (unsigned char *)array;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)value;
		i++;
		ptr++;
	}
	return (array);
}

/*
This function, ft_memset, sets each byte of a memory block array to the 
specified value. It iterates through the memory block and assigns the 
value to each byte until the specified len is reached.

Here's a breakdown of what each part of the function does:

t_size i;: Declares a variable i of type t_size to use as an index for 
iterating through the memory block.
unsigned char *ptr;: Declares a pointer ptr of type unsigned char * to 
point to the memory block array. Using an unsigned char pointer allows 
for byte-wise manipulation of the memory block.
ptr = (unsigned char *)array;: Assigns the starting address of the memory 
block array to the pointer ptr. Casting array to an unsigned char * 
nsures that byte-wise operations can be performed on the memory block.
i = 0;: Initializes the index variable i to 0 before starting the iteration.
while (i < len): This loop iterates through the memory block until 
the specified length len is reached.
*ptr = (unsigned char)value;: Sets the value of the byte pointed to 
by ptr to the specified value. Since value is of type int, it is cast 
to unsigned char to ensure that only the least significant byte is 
assigned to the memory block.
i++;: Increments the index variable i to move to the next byte in the 
memory block.
ptr++;: Increments the pointer ptr to point to the next byte in the 
memory block.
return (array);: After setting each byte in the memory block, the 
function returns a pointer to the modified memory block array.
In summary, this function sets each byte of a memory block array to the 
specified value by iterating through the memory block and assigning the 
value to each byte until the specified len is reached.
*/