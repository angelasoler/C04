/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:39:52 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 04:26:10 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int			i;
	int		size;
	char	*aux;
	int		count;

	i = 0;
	count = 0;
	while (nb > 9)
	{
		aux[i]= (nb % 10) - 48;
		nb = nb / 10;
		i++;
	}
	aux[i]= nb - 48;
	if (i != 0)
	{
		size = i;
		while (count < size)
		{
			write(1, &aux[i], 1);
			count++;
			i--;
		}
	}
}

int	main()
{
	ft_putnbr(156515);
}