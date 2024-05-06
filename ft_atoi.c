/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:29:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:05:50 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			num;
	t_Counters	sign_index;

	sign_index = ft_struct(0, 1, 1, 0);
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

/*
This function, ft_atoi, converts a string str to an integer.

Initialization:
It initializes variables num and sign_index.
num stores the final integer value.
sign_index is a structure containing counters and sign information.
Skip Leading Whitespace and Symbols:
It skips leading whitespace and symbols by calling the ft_spacesymbols 
function and updating the sign_index.
Check Sign:
It checks if the number is positive or negative based on the presence of
 a leading '+' or '-' sign.
If a '-' sign is encountered, it updates the sign multiplier accordingly.
Convert Characters to Integer:
It iterates through the characters of the string after the optional sign.
For each digit character, it multiplies the current num by 10 and adds 
the numerical value of the character.
Return Value:
Returns the final integer value, considering the sign.
*/