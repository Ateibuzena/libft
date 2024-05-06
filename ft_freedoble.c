/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freedoble.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:53:22 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:38:58 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_freedoble(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

/*
This function, ft_freedoble, is responsible for freeing memory allocated 
to a double pointer ptr, which represents an array of strings.

Iterating Through the Array:
It iterates through the array of strings using a while loop until it 
encounters a NULL pointer (indicating the end of the array).
For each non-NULL pointer encountered, it frees the memory allocated to
 the string using the free function.
Freeing the Array Pointer:
After freeing all individual strings, it frees the memory allocated to 
the array pointer ptr itself using the free function.
*/