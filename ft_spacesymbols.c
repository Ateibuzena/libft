/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spacesymbols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:28:49 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/21 22:02:35 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Sign_Index	ft_spacesymbols(const char *str, t_Sign_Index *dic)
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
