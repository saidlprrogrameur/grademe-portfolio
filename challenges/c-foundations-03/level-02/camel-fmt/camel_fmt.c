#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;
	int		upper;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	upper = 0;
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c == '_')
			upper = 1;
		else
		{
			if (upper && c >= 'a' && c <= 'z')
				c = c - 32;
			write(1, &c, 1);
			upper = 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}