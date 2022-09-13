/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 15:00:14 by frcarval          #+#    #+#             */
/*   Updated: 2021/08/06 15:00:16 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fsecvar(char i1, char i2, char i3)
{
	write(1, &i1, 1);
	write(1, &i2, 1);
	write(1, &i3, 1);
	if (i1 != '7' || i2 != '8' || i3 != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				fsecvar(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
