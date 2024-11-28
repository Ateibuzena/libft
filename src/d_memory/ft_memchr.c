/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:32:13 by azubieta          #+#    #+#             */
/*   Updated: 2024/11/22 21:26:36 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

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

/* Searches for the first occurrence of the character c (interpreted as an
unsigned char) in the first n bytes of the memory area pointed to by s.
Parameters:
- s: Pointer to the memory area to be searched.
- c: The character to be searched for.
- n: Number of bytes to be searched.
Returns:
- Pointer to the first occurrence of c in the memory area pointed to by s,
or NULL if the character is not found within the first n bytes. */
