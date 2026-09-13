#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	w;
	int	h;
	int	x;
	int	y;

	if (argc != 3)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	w = atoi(argv[1]);
	h = atoi(argv[2]);
	if (w <= 0 || h <= 0)
		return (0);
	y = 0;
	while (y < h)
	{
		x = 0;
		while (x < w)
		{
			if ((x == 0 || x == w - 1) && (y == 0 || y == h - 1))
				write(1, "+", 1);
			else if (y == 0 || y == h - 1)
				write(1, "-", 1);
			else if (x == 0 || x == w - 1)
				write(1, "|", 1);
			else
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
	return (0);
}