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

int	ft_printf(char const *format, ...)
{
	va_list		args;
	t_Printf	print;

	va_start(args, format);
	print.specifier = ft_estructure();
	if (!print.specifier)
		return (0);
	print.count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			print.i = -1;
			while (++print.i < 9)
				if (print.specifier[print.i].key == *format)
					print.specifier[print.i].ft_ft(&args, 1, &print.count);
		}
		else
			ft_putchar_printf(*format, 1, &print.count);
		format++;
	}
	free(print.specifier);
	va_end(args);
	return (print.count);
}
