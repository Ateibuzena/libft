/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:48:26 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/02 20:48:51 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_digitcount(int n)
{
	long	nb;
	int		count;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		nb = -nb;
		count++;
	}
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		count++;
	}
	count++;
	return (count);
}
