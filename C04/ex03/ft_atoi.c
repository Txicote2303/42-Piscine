int	spaceRmv(char *str)
{
	int	x;

	x = 0;
	while (str[x] == 32 || str[x] == '\t')
	{
		x++;
	}
	return (x);
}

int	mnsCont(char *str, int *x)
{
	int	y;

	y = 0;
	while (str[*x] == '-' || str[*x] == '+')
	{
		if (str[*x] == '-')
			y++;
		*x = *x + 1;
	}
	if (y % 2 == 0)
		return (1);
	return (-1);
}

int	selector(char *str, int spc)
{
	int	cutter;

	cutter = 0;
	while (str[spc] >= '0' && str[spc] <= '9')
	{
		cutter++;
		spc++;
	}
	return (cutter);
}

int	Builder(char *str, int spc, int cutter, int mns)
{
	int	x;
	int	n;

	x = 0;
	n = 0;
	while (x < cutter)
	{
		n *= 10;
		n = n + str[spc] - '0';
		spc++;
		x++;
	}
	n *= mns;
	return (n);
}

int	ft_atoi(char *str)
{
	int	spc;
	int	mns;
	int	cutter;
	int	builder;

	spc = spaceRmv(str);
	mns = mnsCont(str, &spc);
	cutter = selector(str, spc);
	builder = Builder(str, spc, cutter, mns);
	return (builder);
}
