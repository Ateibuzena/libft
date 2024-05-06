/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:29:53 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:35:41 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*buffer;

	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = buffer;
	}
}

/*
This function, ft_lstclear, clears the entire linked list lst,
 deleting each node and deallocating associated memory using the 
 provided deletion function del.

Iterating Through the List:
It iterates through the linked list using a while loop until the 
pointer *lst becomes NULL (indicating the end of the list).
During each iteration, it temporarily stores the next node in the 
list in a buffer variable buffer.
Deleting Nodes:
For each node encountered, it calls the ft_lstdelone function to 
delete the node and deallocate associated memory, passing the current 
node *lst and the deletion function del.
Moving to the Next Node:
After deleting the current node, it updates the pointer *lst to point 
to the next node stored in the buffer variable buffer, effectively 
moving to the next node in the list.
Memory Deallocation:
Once all nodes in the list have been deleted, and the pointer *lst 
becomes NULL, the function exits, leaving the linked list cleared of all 
nodes and memory deallocated.
*/