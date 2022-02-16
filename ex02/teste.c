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


int	main()
{
	int			nb;
	int			i;
	int			size;
	nb = -2147483647;
	size = count_digits(nb);
	char	digits[size+1];

	i = 0;
	// while (nb > 9 )
	// {
	// 	digits[i] = (nb % 10) + 48;
	// 	nb = nb / 10;
	// 	i++;
	// }
	digits[i] = nb + 48;
	// while (i != 0)
	// {
	// 	write(1, &digits[i], 1);
	// 	i--;
	// }
	write(1, &digits[i], 1);
}
