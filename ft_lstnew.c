/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 16:06:06 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:25:53 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *ptr)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	if (!nodo)
		return (NULL);
	nodo->content = ptr;
	nodo->next = NULL;
	return (nodo);
}

/*
This function, ft_lstnew, creates a new linked list node with the given 
content pointer ptr.

Memory Allocation:
It allocates memory for a new linked list node using malloc, with the 
size calculated as sizeof(t_list).
Check for Allocation Failure:
It checks if the memory allocation was successful. If malloc returns NULL,
 indicating failure, it returns NULL.
Node Initialization:
It assigns the content pointer ptr to the content member of the newly 
created node.
It sets the next pointer of the node to NULL, indicating that it is the 
last node in the list.
Return Value:
Returns a pointer to the newly created linked list node.
*/