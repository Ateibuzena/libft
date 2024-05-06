/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:09:03 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:06:00 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize)
{
	t_size	i;
	t_size	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= srclen)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	else
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (srclen);
}

/* This function, ft_strlcpy, copies a null-terminated string src to 
the destination string dst, while ensuring that no more than dstsize 
- 1 bytes are copied to dst to ensure null-termination. It returns the 
length of the source string src.

Here's a breakdown of what each part of the function does:

t_size i; and t_size srclen;: Declare variables i and srclen of type 
t_size to use as indices and to store the length of the source string 
src respectively.
i = 0;: Initialize the index variable i to 0 before starting the iteration.
srclen = ft_strlen(src);: Calculate the length of the source string src 
using the ft_strlen function and store it in the variable srclen.
if (dstsize == 0): Check if dstsize is 0. If so, return the length of 
the source string src.
if (dstsize <= srclen): Check if dstsize is less than or equal to the 
length of the source string src. If so, copy at most dstsize - 1 bytes 
from src to dst.
while (src[i] != '\0' && i < dstsize - 1): Iterate through the characters
 of the source string src until either a null terminator is encountered 
 or dstsize - 1 characters have been copied. Copy each character 
 from src to dst.
else: If dstsize is greater than the length of the source string src, 
copy the entire source string src to dst.
while (src[i] != '\0'): Iterate through the characters of the source 
string src until a null terminator is encountered. Copy each character 
from src to dst.
dst[i] = '\0';: Ensure that the destination string dst is null-terminated
 by appending a null character at the end.
return (srclen);: Return the length of the source string src.
In summary, this function copies a null-terminated string src to the 
destination string dst, ensuring that no more than dstsize - 1 bytes 
are copied to dst to ensure null-termination. It returns the length 
of the source string src.
*/