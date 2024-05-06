/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:28:48 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:10:14 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;

	ptr = malloc((ft_strlen(s1) + 1) * 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, ft_strlen(s1));
	ptr[ft_strlen(s1)] = '\0';
	return (ptr);
}

/*
This function, ft_strdup, duplicates a string s1 by allocating memory 
for a new string and copying the content of s1 into it.

Memory Allocation:
It allocates memory for the new string using malloc, with the size 
calculated as ft_strlen(s1) + 1 to accommodate the null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns 
NULL, indicating failure, it returns NULL.
String Copy:
It copies the content of the original string s1 into the newly allocated
 memory using ft_memcpy.
Null Termination:
It ensures that the duplicated string is properly null-terminated by 
adding a null terminator at the end.
Return Value:
Returns a pointer to the duplicated string.
*/