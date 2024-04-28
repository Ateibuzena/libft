/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spacesymbols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:28:49 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/27 20:19:18 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Counters	ft_spacesymbols(const char *str, t_Counters *dic)
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

/* Skips leading space and symbol characters in the string 
and updates the structure containing the sign and index.
Parameters:
- str: Pointer to the string.
- dic: Pointer to the structure containing the sign and index.
Returns:
- Updated structure containing the sign and index. */
