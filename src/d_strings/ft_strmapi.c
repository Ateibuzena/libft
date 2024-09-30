/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:54:50 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:51:52 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

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
	char	ptr[20] = "hola ana que tal";
	char	*temp;

	temp = ft_strmapi(ptr, ft_f);
	printf("%s", temp);
	return (0);
}*/