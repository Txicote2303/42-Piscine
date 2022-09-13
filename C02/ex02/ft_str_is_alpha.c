int	ft_str_is_alpha(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
		{
			y = 0;
		}
		x++;
	}
	return (y);
}
