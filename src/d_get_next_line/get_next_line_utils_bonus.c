/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 14:40:33 by azubieta          #+#    #+#             */
/*   Updated: 2024/09/30 18:50:21 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/azubieta/sgoinfre/azubieta/utils/libft/libft.h"

t_size	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*join;
	t_size	i;
	t_size	n;

	i = 0;
	n = 0;
	join = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join || (!s1 && !s2))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (n < ft_strlen(s2))
	{
		join[i] = s2[n];
		i++;
		n++;
	}
	join[i] = '\0';
	return (join);
}

char	*ft_strchr(const char *str, int c)
{
	t_size	i;
	char	*ptr;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == (unsigned char)c)
		{
			ptr = (char *)str + i;
			return (ptr);
		}
		i++;
	}
	ptr = 0;
	return (ptr);
}

t_list	*ft_newnode(int fd)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->fd = fd;
	node->buffer = malloc(1 * sizeof(char));
	if (!node->buffer)
		ft_freenode(&node, fd);
	node->buffer[0] = '\0';
	node->next = NULL;
	return (node);
}

char	*ft_freenode(t_list **list, int fd)
{
	t_list	*actual;
	t_list	*previous;

	actual = *list;
	previous = NULL;
	while (actual && actual->fd != fd)
	{
		previous = actual;
		actual = actual->next;
	}
	if (!actual)
		return (NULL);
	if (previous)
		previous->next = actual->next;
	else
		*list = actual->next;
	if (actual->buffer)
		free(actual->buffer);
	free(actual);
	return (NULL);
}

/*ft_freenode:
Si prev es NULL, significa que el nodo a eliminar es el primer nodo 
de la lista. Por lo tanto, *list (el inicio de la lista) se actualiza 
para que apunte al siguiente nodo (current->next).
Si prev no es NULL, se actualiza el puntero next del nodo anterior 
(prev->next) para que apunte al siguiente nodo de current (current->next), 
efectivamente eliminando current de la lista.
*/
/*Por qué ft_remove_node recibe un doble puntero?
La función ft_remove_node recibe un doble puntero porque se necesita
modificar el puntero que apunta al inicio de la lista (list) si el nodo a 
eliminar es el primer nodo de la lista. Si solo se pasara un puntero simple,
no se podría modificar el puntero original que apunta a la lista.

En cambio, ft_remove_list no necesita modificar el puntero que apunta a la
lista, ya que solo se utiliza para recorrer la lista y liberar cada nodo. 
Por lo tanto, solo necesita un puntero simple.*/
