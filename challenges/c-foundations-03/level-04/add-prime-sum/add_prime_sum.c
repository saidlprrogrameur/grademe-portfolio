#include <unistd.h>
#include <stdlib.h>

int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr(int n)
{
	char	c;

	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	sum;

	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	n = 0;
	i = 0;
	while (argv[1][i])
	{
		n = n * 10 + argv[1][i] - '0';
		i++;
	}
	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}