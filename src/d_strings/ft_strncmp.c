/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:50:28 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:39:38 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size n)
{
	t_size			i;
	unsigned char	*ptrs1;
	unsigned char	*ptrs2;

	i = 0;
	ptrs1 = (unsigned char *)s1;
	ptrs2 = (unsigned char *)s2;
	while ((ptrs1[i] != '\0' || ptrs2[i] != '\0') && i < n)
	{
		if (ptrs1[i] != ptrs2[i])
			return (ptrs1[i] - ptrs2[i]);
		i++;
	}
	return (0);
}

/* Compares up to the first n characters of two strings s1 and s2.
Parameters:
- s1: Pointer to the first string.
- s2: Pointer to the second string.
- n: Maximum number of characters to compare.
Returns:
- An integer less than, equal to, or greater than zero if the first n characters
of s1 are found, respectively, to be less than, to match, or be greater than
the first n characters of s2. */
