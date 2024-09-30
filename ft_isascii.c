/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:06 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:25:53 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* Checks if the given character is a valid ASCII character.
Verifies if the ASCII value of the character is within 
the range of valid ASCII characters (0-127).
Parameters:
- c: The character to be checked.
Returns:
- 1 if the character is a valid ASCII character, 0 otherwise. */
