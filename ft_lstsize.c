/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:08:29 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/06 13:27:59 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*sublist;

	i = 0;
	sublist = lst;
	while (sublist)
	{
		i++;
		sublist = sublist->next;
	}
	return (i);
}

/*
This function, ft_lstsize, calculates the number of elements in the 
linked list lst.

Initialization:
It initializes a counter variable i to keep track of the number of elements.
It creates a temporary pointer sublist to traverse the linked list.
Counting Elements:
It iterates through the linked list using a while loop.
For each node encountered, it increments the counter variable i.
It updates the sublist pointer to point to the next node in the list.
Return Value:
Returns the total count of elements in the linked list.
*/