unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] + src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}
