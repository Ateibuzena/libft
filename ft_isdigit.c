/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:26:05 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* Checks if the given character is a digit (0-9).
Compares the ASCII value of the character with 
the ASCII values for digits (48-57).
Parameters:
- c: The character to be checked.
Returns:
- 1 if the character is a digit, 0 otherwise. */
