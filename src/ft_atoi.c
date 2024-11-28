/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:29:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/11/22 21:28:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static struct Counters	ft_struct(t_size o, t_size t, t_size th, t_size f)
{
	t_Counters	sign_index;

	sign_index.i = o;
	sign_index.sign = t;
	sign_index.n = th;
	sign_index.words = f;
	return (sign_index);
}

static struct Counters	ft_spacesymbols(const char *str, t_Counters *dic)
{
	while ((str[dic->i] >= 10 && str[dic->i] < 14)
		|| (str[dic->i] == 32) || (str[dic->i] == '\t'))
	{
		dic->i++;
		if (str[dic->i] == '-' && ft_isdigit(str[dic->i + 1]) == 0)
		{
			dic->n = 0;
			return (*dic);
		}
		if (str[dic->i] == '-' && ft_isdigit(str[dic->i + 1]) == 1)
		{
			dic->sign *= -1;
			dic->i++;
		}
		if (str[dic->i] == '+' && (ft_isdigit(str[dic->i + 1]) == 0))
		{
			dic->n = 0;
			return (*dic);
		}
		if (str[dic->i] == '+' && (ft_isdigit(str[dic->i + 1]) == 1))
			dic->i++;
	}
	return (*dic);
}

int	ft_atoi(const char *str)
{
	long int			num;
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
	if (((num * sign_index.sign) >= -2147483648) && ((num * sign_index.sign) <= 2147483647))
		return (num * sign_index.sign);
	else
		return (0);
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
