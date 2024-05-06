/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:42:11 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:12:14 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, t_size len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

/*
This function, ft_substr, extracts a substring from the string s, 
starting from the index start and of length len.

Boundary Checks:
It checks if the input string s is NULL. If so, it returns NULL.
It checks if the starting index start exceeds the length of s. If so, 
it returns an empty string by calling ft_strdup("").
Adjusting Length:
It adjusts the length len to ensure that it does not exceed the length 
of the substring starting from index start.
Memory Allocation:
It allocates memory for the substring using malloc, with the size 
calculated as (len + 1) * sizeof(char) to accommodate the null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc 
returns NULL, indicating failure, it returns NULL.
Substring Copy:
It copies the substring starting from index start of the original 
string s into the newly allocated memory using ft_strlcpy.
Null Termination:
It ensures that the substring is properly null-terminated by adding 
a null terminator at the end.
Return Value:
Returns a pointer to the allocated substring.
*/