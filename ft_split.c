/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:55 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:16:39 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	t_Pointers	pointers;
	t_Counters	counters;

	counters = ft_struct(0, 0, 0, ft_wordscount(s, c));
	pointers.ptr = malloc((counters.words + 1) * sizeof(char *));
	if (pointers.ptr == NULL)
		return (NULL);
	while (counters.words--)
	{
		while (*s == c)
			s++;
		counters.n = 0;
		while (s[counters.n] != '\0' && s[counters.n] != c)
			counters.n++;
		pointers.temp = malloc((counters.n + 1) * sizeof(char));
		if (pointers.temp == NULL)
			return (ft_nullcase_split(pointers.ptr));
		ft_strlcpy(pointers.temp, s, counters.n + 1);
		pointers.ptr[counters.i++] = pointers.temp;
		pointers.temp = NULL;
		free(pointers.temp);
		s += counters.n;
	}
	pointers.ptr[counters.i] = 0;
	return (pointers.ptr);
}
/*
This function, ft_split, splits the string s into an array of strings 
based on the delimiter c.

Initialization:
It initializes variables pointers and counters to manage pointers and 
count information.
counters.words stores the number of words in the string s based on the 
delimiter c.
Memory Allocation:
It allocates memory for an array of strings using malloc, with the size 
calculated as (counters.words + 1) * sizeof(char *) to accommodate the 
array of pointers and a null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns 
NULL, indicating failure, it returns NULL.
Splitting String:
It iterates through the string s to split it into individual words 
based on the delimiter c.
For each word, it dynamically allocates memory for the word and copies 
it into the array of strings.
Null Termination:
It adds a null pointer at the end of the array of strings to indicate 
the end of the array.
Return Value:
Returns a pointer to the array of strings.
*/
