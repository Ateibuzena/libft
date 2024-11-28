/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:30:33 by azubieta          #+#    #+#             */
/*   Updated: 2024/11/22 21:25:18 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isprint(int c)
{
	if (ft_isascii(c) != 0)
	{
		if (c >= 32 && c <= 126)
			return (1);
	}
	return (0);
}

/* Checks if the given character is a printable character.
Uses the ft_isascii function to ensure that the character 
is a valid ASCII character. Then, verifies if the ASCII value 
of the character falls within the range of printable characters (32-126).
Parameters:
- c: The character to be checked.
Returns:
- 1 if the character is a printable character, 0 otherwise. */
