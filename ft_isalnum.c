/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:40:42 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:52:13 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
		return (1);
	return (0);
}

/* 
This function checks whether a character c is an alphanumeric character 
(a-z, A-Z, or 0-9). Here's a breakdown of what each part of the function 
does:

It calls the functions ft_isalpha and ft_isdigit to check if c is either 
an alphabetic character or a digit character.
If either ft_isalpha(c) or ft_isdigit(c) returns a non-zero value 
(indicating that c is an alphabetic or digit character), the function 
returns 1, indicating true.
If both ft_isalpha(c) and ft_isdigit(c) return 0 (indicating that c is 
neither an alphabetic nor a digit character), the function returns 0, 
indicating false.
In summary, this function determines whether a character c is an 
alphanumeric character (a-z, A-Z, or 0-9) and returns 1 if it is, or 0 
otherwise.
*/