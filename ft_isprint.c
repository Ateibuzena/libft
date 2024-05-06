/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:30:33 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:53:40 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (ft_isascii(c) != 0)
	{
		if (c >= 32 && c <= 126)
			return (1);
	}
	return (0);
}

/*
This function, ft_isprint, checks whether a character c is a printable 
character. It returns 1 if c is a printable character (with an ASCII 
value between 32 and 126 inclusive), otherwise it returns 0.

Here's a breakdown of what each part of the function does:

if (ft_isascii(c) != 0): This condition checks if c is a valid ASCII 
character using the ft_isascii function. If c is not a valid ASCII 
character, the function returns 0.
if (c >= 32 && c <= 126): This nested condition checks if c falls within 
the range of printable ASCII characters, which is between 32 and 126 inclusive.
return (1);: If both conditions are true, meaning c is a valid ASCII 
character and falls within the range of printable characters, the 
function returns 1, indicating true.
return (0);: If either of the conditions is false, meaning c is not a 
valid ASCII character or does not fall within the range of printable 
characters, the function returns 0, indicating false.
In summary, this function determines whether a character c is a 
printable character and returns 1 if it is, or 0 otherwise.
*/