/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:43:57 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:50:57 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

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

/* Compares the first n bytes of the memory areas s1 and s2.
Parameters:
- s1: Pointer to the first memory area.
- s2: Pointer to the second memory area.
- n: Number of bytes to compare.
Returns:
- An integer less than, equal to, or greater than zero if the first n bytes of s1
are found, respectively, to be less than, to match, or be greater than
the first n bytes of s2. */
