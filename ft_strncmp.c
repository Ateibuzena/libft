/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:50:28 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 12:55:35 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*
This function, ft_strncmp, compares the first n characters of two 
strings s1 and s2.

Initialization:
It initializes variables i, ptrs1, and ptrs2. i is used as an index 
to iterate through the characters of the strings. ptrs1 and ptrs2 are 
pointers to unsigned characters representing the strings s1 and s2, 
respectively.
Character Comparison:
It iterates through the characters of the strings using a while loop 
until it reaches the end of either string or n characters, whichever 
comes first.
Comparison:
It compares each character of the strings at the corresponding positions.
If a difference is found, it returns the difference between the ASCII 
values of the characters at the current position.
Equality:
If the loop completes without finding any differences, it returns 0, 
indicating that both strings are equal up to the first n characters.
Return Value:
Returns a negative value if the first differing character in s1 is less
 than the corresponding character in s2.
Returns a positive value if the first differing character in s1 is 
greater than the corresponding character in s2.
Returns 0 if both strings are equal up to the first n characters.
*/