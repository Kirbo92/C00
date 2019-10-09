/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 09:51:24 by migferna          #+#    #+#             */
/*   Updated: 2019/10/09 15:58:48 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(char i, char j, char k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	ft_print_comb(void)
{
	char it[3];

	it[0] = '0';
	while (it[0] <= '9')
	{
		it[1] = it[0] + 1;
		while (it[1] <= '9')
		{
			it[2] = it[1] + 1;
			while (it[2] <= '9')
			{
				ft_print_number(it[0], it[1], it[2]);
				if (!(it[0] == '7' && it[1] == '8' && it[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				it[2]++;
			}
			it[1]++;
		}
		it[0]++;
	}
}
