/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:57:04 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:00:53 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* Checks if the given character is an alphabetic character.
Compares the ASCII value of the character with the ASCII values for uppercase
and lowercase letters (A-Z and a-z).
Parameters:
- c: The character to be checked.
Returns:
- 1 if the character is an alphabetic character, 0 otherwise. */
