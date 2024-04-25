/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_structure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 21:35:07 by azubieta          #+#    #+#             */
/*   Updated: 2024/04/21 22:02:17 by azubieta         ###   ########.fr       */
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
