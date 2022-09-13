char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x == 0)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z' && str[x - 1] != 32)
			str[x] = str[x] + 32;
		else if (str[x - 1] == 32 || str[x - 1] == 43 || str[x - 1] == 45)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] = str[x] - 32;
		}
		x++;
	}
	return (str);
}
