/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:44:36 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 23:12:03 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 1 && (c >= 97 && c <= 122))
		return (c - 32);
	return (c);
}

/*
This function, ft_toupper, converts a lowercase letter to its corresponding 
uppercase letter. If the character c is a lowercase letter (as determined by 
ft_isalpha function) and its ASCII value falls within the range of lowercase 
letters (97 to 122), it subtracts 32 from the ASCII value to convert it to 
its uppercase equivalent.

Here's a breakdown of what each part of the function does:

if (ft_isalpha(c) == 1 && (c >= 97 && c <= 122)): Check if the character c 
is an alphabet character and is a lowercase letter.
ft_isalpha(c) == 1: This condition checks if c is an alphabet character using
 the ft_isalpha function.
(c >= 97 && c <= 122): This condition checks if the ASCII value of c falls 
within the range of lowercase letters.
return (c - 32);: If c is a lowercase letter, subtract 32 from its ASCII 
value to convert it to uppercase, and return the result.
return (c);: If c is not a lowercase letter, simply return c unchanged.
In summary, this function converts a lowercase letter to its corresponding 
uppercase letter by subtracting 32 from its ASCII value. If c is not a 
lowercase letter, it returns c unchanged.
*/