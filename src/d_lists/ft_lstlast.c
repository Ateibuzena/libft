/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:18:51 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:50:41 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

t_list_42	*ft_lstlast(t_list_42 *lst)
{
	t_list_42	*sublist;

	sublist = lst;
	while (sublist)
	{
		if (!sublist->next)
			return (sublist);
		sublist = sublist->next;
	}
	return (sublist);
}
