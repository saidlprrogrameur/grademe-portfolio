long	abs_safe(int n)
{
	long	nb;

	nb = (long)n;
	if (nb < 0)
		nb = -nb;
	return (nb);
}
