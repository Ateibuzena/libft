/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:43:18 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:37:56 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*temp;
	t_list	*sublist;
	t_list	*new_list;

	sublist = lst;
	new_list = 0;
	if (!lst)
		return (0);
	while (sublist)
	{
		temp = f(sublist->content);
		node = ft_lstnew(temp);
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, node);
		sublist = sublist->next;
	}
	return (new_list);
}

/*
This function, ft_lstmap, creates a new linked list resulting from 
applying the function f to each element of the original linked list lst.

Initialization:
It initializes pointers node, sublist, and new_list to manage the 
creation of the new linked list.
It also initializes a temporary pointer temp to hold the result of 
applying the function f to the content of each node.
Processing the Original List:
It iterates through the original linked list lst using a while loop.
For each node encountered, it applies the function f to the content of 
the node, resulting in a new value stored in temp.
It creates a new node node containing the value of temp using the 
ft_lstnew function.
Handling Memory Allocation Errors:
If memory allocation fails while creating a new node, it deallocates 
all memory allocated for the new list using ft_lstclear and returns NULL.
Building the New List:
It adds the newly created node node to the end of the new linked list 
new_list using the ft_lstadd_back function.
Returning the New List:
After processing all nodes in the original list, it returns a pointer 
to the head of the new linked list new_list.
*/