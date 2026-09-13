#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	last;

	i = 0;
	last = '\0';
	if (argc != 2)
	{
		write(1, "e\n", 2);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'e')
			last = 'e';
		i++;
	}
	if (last == 'e')
		write(1, &last, 1);
	write(1, "\n", 1);
	return (0);
}