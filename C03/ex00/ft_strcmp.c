int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while ((s1[x] || s2[x]) != '\0')
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}
