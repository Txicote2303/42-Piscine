unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	p;
	int				l;

	i = 0;
	p = 0;
	l = 0;
	while (src[l])
		l++;
	while (dest[i] && i < size)
		i++;
	while (src[p] && (p + i + 1) < size)
	{
		dest[i + p] = src[p];
		p++;
	}
	if (i < size)
		dest[i + p] = '\0';
	return (i + l);
}
