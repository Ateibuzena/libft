/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 15:29:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/21 22:06:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				num;
	t_Sign_Index	sign_index;

	sign_index = ft_structure();
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
