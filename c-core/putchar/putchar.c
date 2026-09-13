#include <unistd.h>

int	putchar(int c)
{
	unsigned char	c2;

	c2 = (unsigned char)c;
	write(1, &c2, 1);
	return (c2);
}