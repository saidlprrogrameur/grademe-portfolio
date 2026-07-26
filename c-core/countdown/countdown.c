#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	char digit = '9';
	while (digit >= '0')
	{
		write(1, &digit, 1);
		digit--;
	}
	write(1, "\n", 1);
	return (0);
}
