int	ft_str_is_uppercase(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
			y = 0;
		x++;
	}
	return (y);
}
