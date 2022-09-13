int	ft_str_is_printable(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
			y = 0;
		x++;
	}
	return (y);
}
