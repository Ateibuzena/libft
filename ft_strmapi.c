/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:54:50 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:19:28 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	char	*temp;
	int		i;
	char	c;

	i = 0;
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	temp = ptr;
	while (s[i] != '\0')
	{
		c = f(i, s[i]);
		*temp = c;
		temp++;
		i++;
	}
	*temp = '\0';
	return (ptr);
}

/*
This function, ft_strmapi, applies the function f to each character of 
the string s to create a new string.

Memory Allocation:
It allocates memory for the new string using malloc, with the size 
calculated as (ft_strlen(s) + 1) * sizeof(char) to accommodate the 
characters and a null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns 
NULL, indicating failure, it returns NULL.
Character Mapping:
It iterates through each character of the string s.
For each character, it applies the function f with the index i and the 
character s[i] as arguments to obtain the new character.
It stores the new character in the corresponding position of the newly 
allocated string.
Null Termination:
It adds a null terminator at the end of the newly created string.
Return Value:
Returns a pointer to the newly created string.
*/