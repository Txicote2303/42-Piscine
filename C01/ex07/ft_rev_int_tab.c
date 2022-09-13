void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	bckup;

	x = 0;
	while (x < (size / 2))
	{
		bckup = tab[x];
		tab[x] = tab[size - x - 1];
		tab[size - x - 1] = bckup;
		x++;
	}
}
