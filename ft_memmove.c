/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:41:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:03:19 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	if (pdst == 0 && psrc == 0)
		return (0);
	if (pdst > psrc)
	{
		psrc += len;
		pdst += len;
		while (len--)
			*(--pdst) = *(--psrc);
	}
	else if (pdst < psrc)
	{
		while (len--)
			*(pdst++) = *(psrc++);
	}
	return (dst);
}

/*
This function, ft_memmove, copies len bytes from the memory area pointed
 to by src to the memory area pointed to by dst. Unlike ft_memcpy, 
 ft_memmove can handle overlapping memory areas correctly by copying 
 the bytes in the correct order.

Here's a breakdown of what each part of the function does:

unsigned char *pdst; and unsigned char *psrc;: Declare pointers pdst 
and psrc of type unsigned char * to point to the destination and source 
memory areas dst and src respectively. Using unsigned char pointers 
allows for byte-wise manipulation of the memory areas.
pdst = (unsigned char *)dst; and psrc = (unsigned char *)src;: Assign 
the starting addresses of the destination and source memory areas dst 
and src respectively to the pointers pdst and psrc. Casting dst and src 
to unsigned char * ensures that byte-wise operations can be performed 
on the memory areas.
if (pdst == 0 && psrc == 0): Check if both the destination and source 
pointers are null. If either pointer is null, indicating a null pointer 
was passed as an argument, the function returns null.
if (pdst > psrc): Check if the destination pointer pdst is greater than 
the source pointer psrc. If so, it means that the memory areas overlap 
and the copying operation needs to be performed in reverse order.
psrc += len; and pdst += len;: Adjust the source and destination pointers
 to point to the end of their respective memory areas.
while (len--): Iterate through the memory areas in reverse order, copying
 each byte from the source memory area psrc to the destination 
 memory area pdst.
*(--pdst) = *(--psrc);: Copy the byte pointed to by psrc to the byte 
pointed to by pdst, then decrement both pointers to move to the 
previous byte.
else if (pdst < psrc): If the destination pointer pdst is less than 
the source pointer psrc, it means that the memory areas do not overlap 
and the copying operation can be performed in forward order.
while (len--): Iterate through the memory areas in forward order, 
copying each byte from the source memory area psrc to the destination 
memory area pdst.
*(pdst++) = *(psrc++);: Copy the byte pointed to by psrc to the byte 
pointed to by pdst, then increment both pointers to move to the next byte.
return (dst);: After copying len bytes from the source to the destination
 memory area, the function returns a pointer to the destination memory 
 area dst.
In summary, this function copies len bytes from the memory area pointed 
to by src to the memory area pointed to by dst, handling overlapping 
memory areas correctly by copying the bytes in the appropriate order
*/