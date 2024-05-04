/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:35:07 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/04 21:35:43 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_Counters	ft_struct(t_size one, t_size two, t_size three, t_size four)
{
	t_Counters	sign_index;

	sign_index.i = one;
	sign_index.sign = two;
	sign_index.n = three;
	sign_index.words = four;
	return (sign_index);
}

/* Initializes and returns a structure of type 
t_Sign_Index with default values.
Returns:
- Structure of type t_Sign_Index with the index 
initialized to 0, the sign set to 1,
and the n flag set to 1. */
