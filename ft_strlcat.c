/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:11:53 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:10:17 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcat(char *dst, const char *src, t_size dstsize)
{
	t_size		i;
	t_size		dstlen;
	t_size		srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	while (src[i] != '\0' && i < dstsize - dstlen - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

/*
This function, ft_strlcat, appends the null-terminated string src to 
the end of the null-terminated string dst, while ensuring that no more 
than dstsize - dstlen - 1 bytes are appended to dst to ensure 
null-termination. It returns the total length of the concatenated 
strings dst and src.

Here's a breakdown of what each part of the function does:

t_size i;, t_size dstlen;, and t_size srclen;: Declare variables i, 
dstlen, and srclen of type t_size to use as indices and to store the 
lengths of the destination string dst and the source string src respectively.
i = 0;: Initialize the index variable i to 0 before starting the iteration.
dstlen = ft_strlen(dst); and srclen = ft_strlen(src);: Calculate the 
lengths of the destination string dst and the source string src using 
the ft_strlen function and store them in the variables dstlen and srclen 
respectively.
if (dstlen >= dstsize): Check if the length of the destination string 
dst is greater than or equal to dstsize. If so, it means that there is 
no space left in dst to append src, so the function returns the sum of 
dstsize and srclen.
while (src[i] != '\0' && i < dstsize - dstlen - 1): Iterate through the 
characters of the source string src until either a null terminator is 
encountered or the maximum number of bytes that can be appended to dst 
while ensuring null-termination (dstsize - dstlen - 1) is reached. 
Append each character from src to dst.
dst[dstlen + i] = '\0';: Ensure that the concatenated string dst is 
null-terminated by appending a null character at the end.
return (dstlen + srclen);: Return the total length of the concatenated 
strings dst and src.
In summary, this function appends the null-terminated string src to the 
end of the null-terminated string dst, while ensuring null-termination 
and preventing buffer overflow by not appending more than 
dstsize - dstlen - 1 bytes to dst. It returns the total length of the 
concatenated strings dst and src.
*/