/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 22:53:21 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:38:31 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

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

/* Copies n bytes from memory area src to memory area dst.
The memory areas must not overlap.
Parameters:
- dst: Pointer to the destination memory area.
- src: Pointer to the source memory area.
- n: Number of bytes to copy.
Returns:
- Pointer to the destination memory area (dst). */
