/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:54:06 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:52:04 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* 
This function, ft_isascii, checks whether a character c is a valid ASCII 
character. It returns 1 if c is a valid ASCII character (with an ASCII 
value between 0 and 127), otherwise it returns 0.

Here's a breakdown of what each part of the function does:

if (c >= 0 && c <= 127): This condition checks if the ASCII value of c 
falls within the range of valid ASCII characters, which is between 0 and 
127 inclusive.
return (1);: If the condition in the if statement is true, meaning c is a 
valid ASCII character, the function returns 1, indicating true.
return (0);: If the condition in the if statement is false, meaning c is 
not a valid ASCII character, the function returns 0, indicating false.
In summary, this function determines whether a character c is a valid 
ASCII character and returns 1 if it is, or 0 otherwise.
*/