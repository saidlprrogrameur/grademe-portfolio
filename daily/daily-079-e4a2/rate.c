int	biggest_jump(int *rate, int n)
{
	int	i;
	int	jump;
	int	max;

	if (n < 2)
		return (0);
	i = 1;
	max = 0;
	while (i < n)
	{
		jump = rate[i] - rate[i - 1];
		if (jump > max)
			max = jump;
		i++;
	}
	return (max);
}