/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:42:11 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:39:50 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

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

/* Allocates and returns a substring of the string s.
The substring begins at index start and is of maximum size len.
Parameters:
- s: Pointer to the string.
- start: Index of the starting character of the substring.
- len: Maximum length of the substring.
Returns:
- Pointer to the newly allocated substring, or NULL if allocation fails. */
