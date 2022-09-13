/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c2                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:07:53 by frcarval          #+#    #+#             */
/*   Updated: 2021/08/11 18:38:07 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fsecvar(int c)
{	
	char	cd;
	char	cu;
	int		d;
	int		u;

	d = c / 10;
	u = c % 10;
	cd = '0' + d;
	cu = '0' + u;
	write(1, &cd, 1);
	write(1, &cu, 1);
}

void	ft_print_comb2(void)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (i1 <= 98)
	{
		i2 = i1 + 1;
		while (i2 <= 99)
		{
			fsecvar(i1);
			write(1, " ", 1);
			fsecvar(i2);
			if (i1 != 98)
			{
				write(1, ", ", 2);
			}
			i2++;
		}
		i1++;
	}
}
