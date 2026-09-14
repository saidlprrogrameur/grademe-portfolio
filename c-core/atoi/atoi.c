int atoi(const char *str)
{
	int i = 0;
	int res = 0;
	int	sin = 1;

		while ((str[i] == ' ')|| (str[i] >= 7 && str[i] <= 13))
		{
			i++;
		}
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sin = -1;
				i++;
			}
			else
			{
				i++;
			}
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
	return (res * sin);
}
