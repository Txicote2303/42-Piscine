int	ft_compr(char *str, char *to_find, int x)
{
	int	y;

	y = 0;
	while (to_find[y] != '\0')
	{
		if (str[x] != to_find[y])
			return (0);
		x++;
		y++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	z;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		if (str[x] == to_find[0])
			z = ft_compr(str, to_find, x);
		if (z == 1)
			return (&str[x]);
		x++;
	}
	return (0);
}
