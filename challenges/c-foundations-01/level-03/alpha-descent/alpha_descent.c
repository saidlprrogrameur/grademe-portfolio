#include <unistd.h>

int	main(int argc, char **argv)
{
	char c = 'Z';
	int i = 0;

	while (c >= 'A')
	{
		if (i % 4 == 0 || i % 4 == 1)
		{
			write(1, &c, 1);
		}
		else
		{
			char lower = c + 32;
			write(1, &lower, 1);
		}
		c--;
		i++;
	}
	(void)argc;
	(void)argv;
	write(1, "\n", 1);
	return (0);
}