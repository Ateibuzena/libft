/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:40:00 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:26:45 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
This function, ft_lstadd_front, adds a new node new to the front of the 
linked list lst.

Updating Pointers:
It assigns the next pointer of the new node new to the current head 
of the linked list lst.
It updates the pointer lst to point to the new node new, making it the 
new head of the list.
*/