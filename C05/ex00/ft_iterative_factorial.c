int	ft_iterative_factorial(int nb)
{
	int	x;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	x = nb - 1;
	while (x > 0)
	{
		nb *= x;
		x--;
	}
	return (nb);
}
