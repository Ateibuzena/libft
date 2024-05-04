/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:31:55 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/04 21:35:10 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	t_Pointers	pointers;
	t_Counters	counters;

	counters = ft_struct(0, 0, 0, ft_wordscount(s, c));
	pointers.ptr = malloc((counters.words + 1) * sizeof(char *));
	if (pointers.ptr == NULL)
		return (NULL);
	while (counters.words--)
	{
		while (*s == c)
			s++;
		counters.n = 0;
		while (s[counters.n] != '\0' && s[counters.n] != c)
			counters.n++;
		pointers.temp = malloc((counters.n + 1) * sizeof(char));
		if (pointers.temp == NULL)
			return (ft_nullcase_split(pointers.ptr));
		ft_strlcpy(pointers.temp, s, counters.n + 1);
		pointers.ptr[counters.i++] = pointers.temp;
		pointers.temp = NULL;
		free(pointers.temp);
		s += counters.n;
	}
	pointers.ptr[counters.i] = 0;
	return (pointers.ptr);
}
/*
#include <stdio.h>
int main(void)
{
	char	*ptr = "   lorem   ipsum dolor     sit amet, c";
	char	**puntero;

	puntero = ft_split(ptr, ' ');
	for (int i = 0; i < 12; i++)
	{
		printf("%s\n", puntero[i]);
	}
	printf("%s", ptr);
	return (0);
}*/
