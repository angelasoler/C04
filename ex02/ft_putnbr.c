/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:39:52 by asoler            #+#    #+#             */
/*   Updated: 2022/02/17 00:26:06 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digits(int nb)
{
	int counter;

	counter = 0;
	while (nb > 9)
	{
		nb = nb % 10;
		counter++;
	}
	return (counter);
}

void	ft_putnbr(int nb)
{
	// char	aux;
	int			i;
	int size;
	size = count_digits(nb);
	char	digits[size+1];
	long n;

	n = nb;
	i = 0;
	
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	while (n > 9)
	{
		digits[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	digits[i] = n + 48;
	while (i != 0)
	{
		write(1, &digits[i], 1);
		i--;
	}
	write(1, &digits[i], 1);
}

int	main()
{
	ft_putnbr(-2147483649);
}