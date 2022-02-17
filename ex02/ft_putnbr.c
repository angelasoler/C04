/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:39:52 by asoler            #+#    #+#             */
/*   Updated: 2022/02/17 03:31:34 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	is_negative(long n)
{
	write(1, "-", 1);
	n *= -1;
	return (n);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	digits[13];
	long	n;

	n = nb;
	i = 0;
	if (n < 0)
		n = is_negative(n);
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
