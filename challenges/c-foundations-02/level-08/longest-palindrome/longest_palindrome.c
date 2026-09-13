#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	left;
	int	right;
	int	start;
	int	max_len;
	int	len;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	start = 0;
	max_len = 0;
	while (argv[1][i])
	{
		left = i;
		right = i;
		while (left >= 0 && argv[1][right]
			&& argv[1][left] == argv[1][right])
		{
			len = right - left + 1;
			if (len > max_len)
			{
				max_len = len;
				start = left;
			}
			left--;
			right++;
		}
		i++;
	}
	i = 0;
	while (argv[1][i])
		i++;
	left = 0;
	while (left < i)
	{
		right = left;
		while (right < i)
		{
			int	l;
			int	r;
			int	ok;

			l = left;
			r = right;
			ok = 1;
			while (l < r)
			{
				if (argv[1][l] != argv[1][r])
				{
					ok = 0;
					break;
				}
				l++;
				r--;
			}
			if (ok && right - left + 1 > max_len)
			{
				max_len = right - left + 1;
				start = left;
			}
			right++;
		}
		left++;
	}
	i = 0;
	while (i < max_len)
	{
		write(1, &argv[1][start + i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}