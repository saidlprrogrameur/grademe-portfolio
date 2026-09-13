#include <unistd.h>

void	error(void)
{
	write(1, "Error\n", 6);
}

void	putnbr(int n)
{
	char	c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	stack[1000];
	int	top;
	int	i;
	int	n;
	int	sign;
	int	result;
	int	a;
	int	b;

	if (argc != 2)
	{
		error();
		return (0);
	}
	top = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			i++;
		else if ((argv[1][i] >= '0' && argv[1][i] <= '9')
			|| (argv[1][i] == '-' && argv[1][i + 1] >= '0'
				&& argv[1][i + 1] <= '9'))
		{
			n = 0;
			sign = 1;
			if (argv[1][i] == '-')
			{
				sign = -1;
				i++;
			}
			while (argv[1][i] >= '0' && argv[1][i] <= '9')
			{
				n = n * 10 + argv[1][i] - '0';
				i++;
			}
			stack[top] = n * sign;
			top++;
		}
		else if (argv[1][i] == '+' || argv[1][i] == '-'
			|| argv[1][i] == '*' || argv[1][i] == '/'
			|| argv[1][i] == '%')
		{
			if (top < 2)
			{
				error();
				return (0);
			}
			b = stack[top - 1];
			top--;
			a = stack[top - 1];
			top--;
			if (argv[1][i] == '+')
				result = a + b;
			else if (argv[1][i] == '-')
				result = a - b;
			else if (argv[1][i] == '*')
				result = a * b;
			else if (argv[1][i] == '/')
			{
				if (b == 0)
				{
					error();
					return (0);
				}
				result = a / b;
			}
			else
			{
				if (b == 0)
				{
					error();
					return (0);
				}
				result = a % b;
			}
			stack[top] = result;
			top++;
			i++;
		}
		else
		{
			error();
			return (0);
		}
	}
	if (top != 1)
	{
		error();
		return (0);
	}
	putnbr(stack[0]);
	write(1, "\n", 1);
	return (0);
}