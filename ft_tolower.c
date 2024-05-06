/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:59:10 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:13:46 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) == 1 && (c >= 65 && c <= 90))
		return (c + 32);
	return (c);
}

/*
This function, ft_tolower, converts an uppercase letter to its corresponding
 lowercase letter. If the character c is an uppercase letter (as determined 
 by ft_isalpha function) and its ASCII value falls within the range of 
 uppercase letters (65 to 90), it adds 32 to the ASCII value to convert it 
 to its lowercase equivalent.

Here's a breakdown of what each part of the function does:

if (ft_isalpha(c) == 1 && (c >= 65 && c <= 90)): Check if the character c 
is an alphabet character and is an uppercase letter.
ft_isalpha(c) == 1: This condition checks if c is an alphabet character 
using the ft_isalpha function.
(c >= 65 && c <= 90): This condition checks if the ASCII value of c falls 
within the range of uppercase letters.
return (c + 32);: If c is an uppercase letter, add 32 to its ASCII value 
to convert it to lowercase, and return the result.
return (c);: If c is not an uppercase letter, simply return c unchanged.
In summary, this function converts an uppercase letter to its corresponding 
lowercase letter by adding 32 to its ASCII value. If c is not an uppercase 
letter, it returns c unchanged.
*/