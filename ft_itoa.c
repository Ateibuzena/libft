/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:32:30 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:18:08 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	t_Itoa	variables;

	variables.i = n;
	variables.index = ft_digitcount(n);
	variables.ptr = malloc((ft_digitcount(n) + 1) * sizeof(char));
	if (!variables.ptr)
		return (NULL);
	variables.temp = variables.ptr;
	if (variables.i < 0)
	{
		*variables.temp = '-';
		variables.i = -variables.i;
	}
	variables.temp += ft_digitcount(n);
	*variables.temp = '\0';
	variables.temp--;
	while (variables.i / 10 != 0)
	{
		*variables.temp = variables.i % 10 + '0';
		variables.i = variables.i / 10;
		variables.temp--;
	}
	*variables.temp = variables.i % 10 + '0';
	return (variables.ptr);
}

/*
This function, ft_itoa, converts an integer n to a null-terminated string.

Initialization:
It initializes variables variables to manage the integer conversion process.
Memory Allocation:
It allocates memory for the resulting string using malloc, with the size
 calculated as (ft_digitcount(n) + 1) * sizeof(char) to accommodate the 
 digits and a null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns 
NULL, indicating failure, it returns NULL.
Sign Handling:
If the integer n is negative, it sets the first character of the 
resulting string to '-' and converts n to its absolute value.
Conversion:
It iterates through the integer n from right to left, converting each 
digit to its character representation and storing it in the resulting string.
Null Termination:
It adds a null terminator at the end of the resulting string.
Return Value:
Returns a pointer to the resulting string representing the integer n.
*/