/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:00:10 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/21 22:06:07 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, t_size len)
{
	t_size	i;

	i = 0;
	if (len == (t_size)-1)
		len = ft_strlen(hay);
	if (*need == '\0')
		return ((char *)hay);
	while (*hay != '\0' && i < len)
	{
		if (*hay == *need)
		{
			if (ft_strncmp(hay, need, ft_strlen(need)) == 0
				&& len - i >= (t_size)ft_strlen(need))
				return ((char *)hay);
		}
		hay++;
		i++;
	}
	return (0);
}
