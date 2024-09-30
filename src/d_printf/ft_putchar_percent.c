/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:48:37 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:08 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

void	ft_call_putchar_percent(va_list *args, int fd, int *count)
{
	(void)args;
	write(fd, "%", 1);
	*count += 1;
}
