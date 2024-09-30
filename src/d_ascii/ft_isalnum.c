/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:40:42 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:49:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}

/* Checks if the given character is alphanumeric.
Uses the ft_isalpha and ft_isdigit functions to determine if the character
is either a letter or a digit.
Parameters:
- c: The character to be checked.
Returns:
- 1 if the character is alphanumeric, 0 otherwise. */
