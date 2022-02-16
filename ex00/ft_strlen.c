/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 02:38:03 by asoler            #+#    #+#             */
/*   Updated: 2022/02/16 03:25:35 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

#include <string.h>
#include <stdio.h>
int	main()
{
	int result;
	char *cadeia = "hola me llamo marvin! a onde ta o erro?";

	result = ft_strlen(cadeia);
	printf("fake = %d\n", result);

	result = strlen(cadeia);
	printf("original = %d\n", result);
}
