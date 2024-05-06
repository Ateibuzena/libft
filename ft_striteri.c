/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:22:51 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:20:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
This function, ft_striteri, applies the function f to each character 
of the string s, along with its index.

Character Iteration:
It iterates through each character of the string s using a while loop.
Function Application:
For each character, it calls the function f with two arguments: the 
index i and a pointer to the character s[i].
This allows the function f to modify the characters of the string s or 
perform any other desired operation based on the character and its index
*/