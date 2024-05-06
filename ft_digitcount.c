/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 20:48:26 by azubieta          #+#    #+#             */
/*   Updated: 2024/05/05 22:47:55 by azubieta         ###   ########.fr       */
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

/*
This function counts the number of digits in an integer n. Here's a breakdown of what each part of the function does:

long nb;: Declares a variable nb of type long to store the absolute value of the integer n. long is used instead of int to handle larger integers without overflow.
int count;: Declares a variable count of type int to keep track of the number of digits in n.
nb = n;: Assigns the value of n to nb to manipulate it without modifying the original value.
count = 0;: Initializes count to 0 before starting to count the digits.
if (nb < 0) { nb = -nb; count++; }: If nb is negative, changes its sign to positive by multiplying it by -1. Also increments count by 1 to account for the negative sign of the number.
while (nb / 10 != 0) { nb = nb / 10; count++; }: Uses a while loop to repeatedly divide nb by 10 until nb becomes equal to 0 (i.e., until there are no more digits to count). In each iteration of the loop, divides nb by 10 and increments count by 1 to count the digit.
count++;: After exiting the while loop, increments count by 1 more to count the last digit.
return (count);: The function returns the value of count, which represents the total number of digits in n, including the sign if n is negative.
In summary, this function calculates the number of digits in an integer n, including the sign if n is negative, using a while loop to repeatedly divide the absolute value of n by 10 until there are no more digits left.
*/