/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:53:21 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:00:10 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, t_size n)
{
	t_size				i;
	unsigned char		*pdst;
	const unsigned char	*psrc;

	i = 0;
	pdst = (unsigned char *)dst;
	psrc = (const unsigned char *)src;
	if (pdst == 0 && psrc == 0)
		return (0);
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}

/* 
This function, ft_memcpy, copies n bytes from the memory area pointed 
to by src to the memory area pointed to by dst. It performs the byte-wise 
copy operation by iterating through the memory areas and copying each 
byte from src to dst.

Here's a breakdown of what each part of the function does:

t_size i;: Declares a variable i of type t_size to use as an index for 
iterating through the memory areas.
unsigned char *pdst;: Declares a pointer pdst of type unsigned char * to
 point to the destination memory area dst. Using an unsigned char pointer 
 allows for byte-wise manipulation of the memory areas.
const unsigned char *psrc;: Declares a pointer psrc of type 
const unsigned char * to point to the source memory area src. Using a 
const unsigned char pointer ensures that the source memory area is 
treated as read-only.
pdst = (unsigned char *)dst;: Assigns the starting address of the 
destination memory area dst to the pointer pdst. Casting dst to an 
unsigned char * ensures that byte-wise operations can be performed on 
the destination memory area.
psrc = (const unsigned char *)src;: Assigns the starting address of 
the source memory area src to the pointer psrc. Casting src to a 
const unsigned char * ensures that byte-wise operations can be 
performed on the source memory area, while also enforcing read-only access.
if (pdst == 0 && psrc == 0): Checks if both the destination and 
source pointers are null. If either pointer is null, 
indicating a null pointer was passed as an argument, 
the function returns null.
while (i < n): This loop iterates through the memory areas until the 
specified number of bytes n is reached.
pdst[i] = psrc[i];: Copies the byte from the source memory area psrc 
at index i to the destination memory area pdst at index i.
i++;: Increments the index variable i to move to the next byte in the 
memory areas.
return (dst);: After copying n bytes from the source to the destination 
memory area, the function returns a pointer to the destination 
memory area dst.
In summary, this function copies n bytes from the memory area pointed 
to by src to the memory area pointed to by dst by performing a byte-wise
 copy operation
 */