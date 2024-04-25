/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:57:54 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/10 13:22:23 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int value, t_size len)
{
	t_size			i;	
	unsigned char	*ptr;

	ptr = (unsigned char *)array;
	i = 0;
	while (i < len)
	{
		*ptr = (unsigned char)value;
		i++;
		ptr++;
	}
	return (array);
}
