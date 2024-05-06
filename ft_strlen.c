/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:47:45 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:55:09 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/* 
This function, ft_strlen, calculates the length of a null-terminated 
string s. It iterates through the characters of the string until it 
encounters the null terminator '\0', and counts the number of characters 
encountered.

Here's a breakdown of what each part of the function does:

int i;: Declares an integer variable i to use as an index for iterating 
through the characters of the string.
i = 0;: Initializes the index variable i to 0 before starting the iteration.
while (s[i] != '\0'): This loop iterates through the characters of the 
string s until it encounters the null terminator '\0'.
i++;: Inside the loop, increments the index variable i to move to the 
next character in the string.
return (i);: After the loop finishes, the function returns the final 
value of i, which represents the length of the string s (excluding the 
null terminator).
In summary, this function calculates the length of a null-terminated 
string s by iterating through its characters until it reaches the null 
terminator, and returns the count of characters encountered.
*/