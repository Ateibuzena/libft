/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:38:24 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:36:37 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*sublist;

	sublist = lst;
	while (sublist)
	{
		f(sublist->content);
		sublist = sublist->next;
	}
}

/*
This function, ft_lstiter, iterates through each node of the linked 
list lst and applies the function f to the content of each node.

Traversal of the List:
It initializes a pointer sublist to traverse the linked list, starting 
from the head lst.
Iteration and Function Application:
It iterates through the linked list using a while loop until it reaches 
the end of the list (i.e., sublist becomes NULL).
For each node encountered, it applies the function f to the content of 
the node (sublist->content).
Moving to the Next Node:
After applying the function to the current node, it updates the sublist 
pointer to point to the next node in the list (sublist->next), 
effectively moving to the next node.
*/