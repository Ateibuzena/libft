/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:35:09 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:14:28 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	t_size	init;
	t_size	end;

	init = 0;
	end = ft_strlen(s1);
	while (s1[init] != '\0' && ft_strchr(set, s1[init]) != NULL)
		init++;
	if (s1[init] == '\0')
		return (ft_strdup(""));
	while (init < end && ft_strchr(set, s1[end]) != NULL)
		end--;
	end++;
	ptr = ft_substr(s1, init, end - init);
	return (ptr);
}

/*
This function, ft_strtrim, trims leading and trailing characters from 
the string s1 that match any character in the set set.

Initialization:
It initializes variables init and end to track the indices for trimming.
Trimming Leading Characters:
It increments the init index until it encounters a character in s1 that
is not in the set or reaches the end of s1.
Check for Empty String:
If the entire string s1 consists of characters from the set set, it 
returns an empty string.
Trimming Trailing Characters:
It decrements the end index until it encounters a character in s1 that 
is not in the set.
Substring Creation:
It creates a substring using ft_substr starting from the index init to 
end - 1 to exclude the trailing whitespace.
Return Value:
Returns a pointer to the trimmed string.
*/