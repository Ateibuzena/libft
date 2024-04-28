/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordscount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:29:30 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/28 21:04:59 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_wordscount(char const *s, char c)
{
	t_size	count;
	t_size	word;

	count = 0;
	word = 0;
	if (s[count] != c && s[count] != '\0')
		word++;
	while (s[count] != '\0')
	{
		if (s[count] == c && s[count + 1] != c && s[count + 1] != '\0')
			word++;
		count++;
	}
	if (s[count] == '\0' && word == 0)
		return (word);
	return (word);
}

/*
#include <stdio.h>
int main(void)
{
	char *ptr = "   lorem   ipsum dolor     sit amet, consectetur";
	int	i;

	i = ft_wordscount(ptr, ' ');
	printf("%d", i);
	return (0);
}*/
