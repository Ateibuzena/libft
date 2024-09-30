/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:15:57 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:39:13 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

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

/* Locates the first occurrence of the character c 
(interpreted as an unsigned char) in the string str, 
including the terminating null character.
Parameters:
- str: Pointer to the string to be searched.
- c: The character to be found.
Returns:
- Pointer to the located character within the string str, 
or NULL if the character is not found. */
