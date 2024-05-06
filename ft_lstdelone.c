/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:05:14 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:32:48 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*
This function, ft_lstdelone, deletes a single node from the linked list lst,
 applying the provided deletion function del to the content of the node.

Content Deletion:
It applies the deletion function del to the content of the node lst by 
passing lst->content as an argument.
This deletion function is responsible for deallocating any memory 
associated with the content of the node.
Node Deallocation:
It deallocates the memory occupied by the node lst using the free function.
*/