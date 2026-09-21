
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	j;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}

	n = atoi(argv[1]);
	if (n <= 0)
		return (0);

	i = 1;
	while (i <= n)
	{
		j = 0;
		while (j < n - i)
		{
			write(1, " ", 1);
			j++;
		}

		j = 0;
		while (j < 2 * i - 1)
		{
			write(1, "#", 1);
			j++;
		}

		write(1, "\n", 1);
		i++;
	}
	return 0;
}
