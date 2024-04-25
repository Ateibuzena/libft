/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:35:07 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/25 15:29:00 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Sign_Index	ft_structure(void)
{
	t_Sign_Index	sign_index;

	sign_index.i = 0;
	sign_index.sign = 1;
	sign_index.n = 1;
	return (sign_index);
}

/* Initializes and returns a structure of type 
t_Sign_Index with default values.
Returns:
- Structure of type t_Sign_Index with the index 
initialized to 0, the sign set to 1,
and the n flag set to 1. */
