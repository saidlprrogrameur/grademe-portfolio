#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	while (argv[1][i])
	{
		c = argv[1][i];
		if (c >= 'a' && c <= 'y')
			c++;
		else if (c == 'z')
			c = 'a';
		else if (c >= 'A' && c <= 'Y')
			c++;
		else if (c == 'Z')
			c = 'A';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}