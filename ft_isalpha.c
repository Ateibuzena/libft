/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:57:04 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:49:34 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/* 
This function checks whether a character c is an alphabetic character 
(a-z or A-Z). Here's a breakdown of what each part of the function does:

If the ASCII value of c corresponds to an uppercase letter (between 65 and 90) 
or a lowercase letter (between 97 and 122), the function returns 1.
If the condition in the if statement is true, meaning c is an alphabetic 
character, the function returns 1, indicating true.
If the condition in the if statement is false, meaning c is not an alphabetic 
character, the function returns 0, indicating false.
In summary, this function determines whether a character c is an alphabetic 
character (a-z or A-Z) and returns 1 if it is, or 0 otherwise.
*/