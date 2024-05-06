/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:38:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:49:27 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/* 
This function checks whether a character c is a digit character (0-9). 
Here's a breakdown of what each part of the function does:

If the ASCII value of c corresponds to a digit character 
(between 48 and 57), the function returns 1.
If the condition in the if statement is true, meaning c is a digit 
character, the function returns 1, indicating true.
If the condition in the if statement is false, meaning c is not a digit 
character, the function returns 0, indicating false.
In summary, this function determines whether a character c is a digit 
character (0-9) and returns 1 if it is, or 0 otherwise
*/