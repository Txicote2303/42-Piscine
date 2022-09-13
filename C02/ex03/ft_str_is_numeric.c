int	ft_str_is_numeric(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] < '0' || str[x] > '9')
			y = 0;
		x++;
	}
	return (y);
}
