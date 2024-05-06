/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:33:23 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:13:20 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*join;
	t_size		i;
	t_size		n;

	n = 0;
	i = 0;
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (n < ft_strlen(s2))
	{
		join[i] = s2[n];
		i++;
		n++;
	}
	join[i] = '\0';
	return (join);
}

/*
This function, ft_strjoin, concatenates two strings s1 and s2 into a 
newly allocated string.

Memory Allocation:
It allocates memory for the concatenated string using malloc, with the 
size calculated as the sum of the lengths of s1 and s2, plus one for 
the null terminator.
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns NULL,
 indicating failure, it returns NULL.
Boundary Checks:
It checks if both s1 and s2 are NULL. If so, it returns NULL.
Concatenation:
It iterates through the characters of s1 and copies them into the 
join string.
Then, it iterates through the characters of s2 and appends them to 
the end of the join string.
Null Termination:
It adds a null terminator at the end of the concatenated string to 
ensure proper termination.
Return Value:
Returns a pointer to the concatenated string.
*/