/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:48:37 by azubieta          #+#    #+#             */
/*   Updated: 2024/06/22 14:48:43 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Specifier	*ft_estructure(void)
{
	t_Specifier	*format_specifiers;

	format_specifiers = (t_Specifier *)malloc(9 * sizeof(t_Specifier));
	if (!format_specifiers)
		return (NULL);
	format_specifiers[0].key = 'c';
	format_specifiers[0].ft_ft = ft_call_putchar_printf;
	format_specifiers[1].key = 's';
	format_specifiers[1].ft_ft = ft_call_putstr_printf;
	format_specifiers[2].key = 'p';
	format_specifiers[2].ft_ft = ft_call_puthex_nil;
	format_specifiers[3].key = 'd';
	format_specifiers[3].ft_ft = ft_call_putnbr_printf;
	format_specifiers[4].key = 'i';
	format_specifiers[4].ft_ft = ft_call_putnbr_printf;
	format_specifiers[5].key = 'u';
	format_specifiers[5].ft_ft = ft_call_putnbr_u;
	format_specifiers[6].key = 'x';
	format_specifiers[6].ft_ft = ft_call_puthex_lower;
	format_specifiers[7].key = 'X';
	format_specifiers[7].ft_ft = ft_call_puthex_upper;
	format_specifiers[8].key = '%';
	format_specifiers[8].ft_ft = ft_call_putchar_percent;
	return (format_specifiers);
}
