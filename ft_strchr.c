/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:15:57 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 12:51:52 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	t_size		i;
	t_size		len;
	char		*ptr;

	i = 0;
	c = c % 256;
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == c)
		{
			ptr = (char *)str + i;
			return (ptr);
		}
		i++;
	}
	ptr = 0;
	return (ptr);
}

/*
This function, ft_strchr, searches for the first occurrence of a 
character c in a given string str.

Initialization:
It initializes variables i and len. i is an index used for iterating 
through the characters of the string, and len is the length of the
string calculated using ft_strlen function.
Character Comparison:
It iterates through each character of the string using a while loop 
until it reaches the end of the string (len).
Matching Character:
If a match is found, it assigns the address of that character to a 
pointer ptr and returns it. This pointer points to the first occurrence
 of the character c in the string.
No Match Found:
If no match is found after iterating through the entire string, it 
assigns ptr to 0 (NULL) and returns it, indicating that the character 
c was not found in the string.
Return Value:
Returns a pointer to the first occurrence of c in str if found, 
otherwise returns NULL
*/