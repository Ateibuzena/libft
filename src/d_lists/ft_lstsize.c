/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:08:29 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:38:18 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

int	ft_lstsize(t_list_42 *lst)
{
	int		i;
	t_list_42	*sublist;

	i = 0;
	sublist = lst;
	while (sublist)
	{
		i++;
		sublist = sublist->next;
	}
	return (i);
}
