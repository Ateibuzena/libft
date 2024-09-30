/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:38:24 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 17:38:08 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/libft/libft.h"

void	ft_lstiter(t_list_42 *lst, void (*f)(void *))
{
	t_list_42	*sublist;

	sublist = lst;
	while (sublist)
	{
		f(sublist->content);
		sublist = sublist->next;
	}
}
