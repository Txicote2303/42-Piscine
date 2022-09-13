int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	d;
	int				diff;

	d = 0;
	diff = 0;
	while ((d < n) && !diff && (s1[d] != '\0') && (s2[d] != '\0'))
	{
		diff = (unsigned char)s1[d] - (unsigned char)s2[d];
		d++;
	}
	if (d < n && !diff && (s1[d] == '\0' || s2[d] == '\0'))
		diff = (unsigned char)s1[d] - (unsigned char)s2[d];
	return (diff);
}
