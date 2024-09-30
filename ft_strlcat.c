/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:11:53 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:28:03 by azubieta         ###   ########.fr       */
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

/* Appends the NUL-terminated string src to the end of dst.
It will append at most dstsize - strlen(dst) - 1 bytes, 
NUL-terminating the result.
Parameters:
- dst: Pointer to the destination string.
- src: Pointer to the source string.
- dstsize: Maximum number of characters that can be written to dst.
Returns:
- Total length of the string that would have been created if 
there was enough space, excluding the NUL terminator. */
