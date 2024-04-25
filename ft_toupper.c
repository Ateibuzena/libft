/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:44:36 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:19:01 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 1 && (c >= 97 && c <= 122))
		return (c - 32);
	return (c);
}

/* Converts the given character to uppercase if it is a lowercase letter.
Parameters:
- c: The character to be converted.
Returns:
- Uppercase version of the character if it is a lowercase letter,
otherwise returns the character unchanged. */
