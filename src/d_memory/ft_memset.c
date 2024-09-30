/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:57:54 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:04 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

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

/* Fills the first len bytes of the memory area 
pointed to by array with the constant byte value.
Parameters:
- array: Pointer to the memory area to be filled.
- value: Value to be set (interpreted as an unsigned char).
- len: Number of bytes to be set to the value.
Returns:
- Pointer to the memory area (array). */
