#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	found;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (argv[2][i])
	{
		found = 0;
		j = 0;
		while (argv[1][j])
		{
			if (argv[2][i] == argv[1][j])
			{
				found = 1;
				break;
			}
			j++;
		}
		if (found)
		{
			k = 0;
			while (k < i)
			{
				if (argv[2][k] == argv[2][i])
					break;
				k++;
			}
			if (k == i)
				write(1, &argv[2][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
