/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:23:31 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 12:53:13 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*ptr;

	ptr = 0;
	len = ft_strlen(str);
	c = (unsigned char)c;
	while (len >= 0)
	{
		if (str[len] == c)
		{
			ptr = (char *)str + len;
			return (ptr);
		}
		len--;
	}
	if (c == '\0')
		ptr = (char *)str + ft_strlen(str);
	return (ptr);
}

/*
This function, ft_strrchr, searches for the last occurrence of a 
character c in a given string str.

Initialization:
It initializes variables len and ptr. len stores the length of the 
string calculated using ft_strlen function. ptr is initially set to NULL.
Character Comparison:
It iterates through each character of the string using a while loop 
in reverse order, starting from the end of the string.
Matching Character:
If a match is found, it assigns the address of that character to a 
pointer ptr and returns it. This pointer points to the last occurrence 
of the character c in the string.
No Match Found:
If no match is found after iterating through the entire string, ptr 
remains NULL.
Return Value:
Returns a pointer to the last occurrence of c in str if found, otherwise
 returns NULL. If c is '\0', returns a pointer to the null terminator of 
 the string.
*/