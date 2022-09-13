int	ft_iterative_power(int nb, int power)
{
	int	x;
	int	y;

	y = nb;
	x = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power != 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (x < power)
	{
		nb *= y;
		x++;
	}
	return (nb);
}
