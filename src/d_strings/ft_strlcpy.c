/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:09:03 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:48 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

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

/* Copies the NUL-terminated string src to dst 
(including the NUL terminator)
up to a maximum of dstsize - 1 characters.
Parameters:
- dst: Pointer to the destination string.
- src: Pointer to the source string.
- dstsize: Size of the destination buffer.
Returns:
- Total length of the string that would have been created 
if there was enough space, excluding the NUL terminator. */
