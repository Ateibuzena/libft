/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:54:50 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/02 21:19:03 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	char	*temp;
	int		i;
	char	c;

	i = 0;
	ptr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	temp = ptr;
	while (s[i] != '\0')
	{
		c = f(i, s[i]);
		*temp = c;
		temp++;
		i++;
	}
	*temp = '\0';
	return (ptr);
}

/*
#include <stdio.h>
int main(void)
{
	char	ptr[20] = "hola";
	char	*temp;

	temp = ft_strmapi(ptr, ft_f);
	printf("%s", temp);
	return (0);
}*/