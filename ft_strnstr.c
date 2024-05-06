/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:00:10 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:04:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, t_size len)
{
	t_size	i;

	i = 0;
	if (len == (t_size)-1)
		len = ft_strlen(hay);
	if (*need == '\0')
		return ((char *)hay);
	while (*hay != '\0' && i < len)
	{
		if (*hay == *need)
		{
			if (ft_strncmp(hay, need, ft_strlen(need)) == 0
				&& len - i >= ft_strlen(need))
				return ((char *)hay);
		}
		hay++;
		i++;
	}
	return (0);
}

/*
This function, ft_strnstr, searches for the first occurrence of the 
substring need in the string hay, where the search is limited to the 
first len characters of hay.

Initialization:
It initializes variable i to 0.
Adjusting Length:
If len is set to -1, it means the entire length of hay should be 
considered. So, it adjusts len to the length of hay.
Boundary Check:
If need is an empty string, it returns a pointer to the beginning of hay.
Substring Search:
It iterates through the characters of hay using a while loop until it 
reaches the end of hay or the specified len.
If the current character of hay matches the first character of need, it 
performs a comparison using ft_strncmp to check if the substring need 
is found starting from the current position of hay.
Return Value:
If the substring need is found within the first len characters of hay, 
it returns a pointer to the beginning of the substring within hay.
If the substring is not found, it returns NULL.
*/