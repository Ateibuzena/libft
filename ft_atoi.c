/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:29:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/27 22:18:35 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			num;
	t_Counters	sign_index;

	sign_index = ft_structure(0, 1, 1, 0);
	num = 0;
	ft_spacesymbols(str, &sign_index);
	if (sign_index.n == 0)
		return (sign_index.n);
	if (str[0] == '+')
		sign_index.i++;
	if (str[0] == '-')
	{
		sign_index.sign *= -1;
		sign_index.i++;
	}
	while (ft_isdigit(str[sign_index.i]) == 1)
	{
		num = (num * 10) + str[sign_index.i] - 48;
		++sign_index.i;
	}
	return (num * sign_index.sign);
}

/* The function converts a string of characters into an integer.
Declaration of local variables.
Stores the converted number.
Structure containing the sign and the index of the string.
Initialization of the structure to store the sign and index.
Initialization of the number to 0.
Function to ignore leading spaces and symbols in the string.
If no number is found after ignoring spaces and symbols,
it returns 0 or the corresponding sign if it's a plus or minus sign.
If the first character is a plus sign, the index is incremented.
If the first character is a minus sign, the sign is multiplied by -1
and the index is incremented.
Converts the string into an integer.
Converts the character to its numeric value and adds it to the existing number.
Advances to the next character.
Returns the number multiplied by the corresponding sign. */
