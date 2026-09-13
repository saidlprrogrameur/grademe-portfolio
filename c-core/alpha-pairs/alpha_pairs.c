#include <unistd.h>

int	main(void)
{
	char	c;
	int		i;

	c = 'a';
	i = 0;
	while (c <= 'z')
	{
		if (i % 2 == 0)
		{
			write(1, &c, 1);
			write(1, &c, 1);
		}
		else
		{
			char	upper;

			upper = c - 32;
			write(1, &upper, 1);
			write(1, &upper, 1);
		}
		c++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}