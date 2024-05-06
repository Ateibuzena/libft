/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:29:19 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:30:32 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*sublist;

	sublist = *lst;
	if (!sublist)
	{
		*lst = new;
		return ;
	}
	while (sublist->next)
		sublist = sublist->next;
	sublist->next = new;
}

/*
This function, ft_lstadd_back, adds a new node new to the end of the 
linked list lst.

Initialization:
It initializes a pointer sublist to traverse the linked list, starting 
from the head.
Adding Node to an Empty List:
If the linked list is empty (i.e., *lst is NULL), it directly assigns 
the new node new to the head of the list (*lst) and returns.
Traversing the List:
It iterates through the linked list using a while loop until it reaches 
the last node.
For each node encountered, it updates the sublist pointer to point to 
the next node.
Adding Node to the End:
Once the end of the list is reached (i.e., sublist->next is NULL), it 
assigns the new node new to the next pointer of the last node, 
effectively adding it to the end of the list.
*/