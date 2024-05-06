/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:18:51 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:29:15 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*sublist;

	sublist = lst;
	while (sublist)
	{
		if (!sublist->next)
			return (sublist);
		sublist = sublist->next;
	}
	return (sublist);
}

/*
This function, ft_lstlast, returns a pointer to the last element of the 
linked list lst.

Initialization:
It initializes a pointer sublist to traverse the linked list, starting 
from the head.
Traversing the List:
It iterates through the linked list using a while loop.
For each node encountered, it checks if the next pointer is NULL.
If the next pointer is NULL, it means the current node is the last node 
in the list, so it returns a pointer to this node.
Return Value:
If the linked list is empty, it returns NULL.
Otherwise, it returns a pointer to the last element of the linked list.
*/