#include <unistd.h>

void	ft_char(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_char('-');
		ft_char('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_char('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_char('0' + nb);
		return ;
	}
	else
		ft_putnbr(nb / 10);
	ft_putnbr(nb % 10);
}
