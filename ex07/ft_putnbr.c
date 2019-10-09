/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 16:57:42 by migferna          #+#    #+#             */
/*   Updated: 2019/10/09 16:22:02 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_pos(int nb)
{
	int cont;
	int exp;
	int nb2;

	cont = 0;
	exp = 1;
	while (nb > 10)
	{
		nb2 = nb;
		while (nb2 > 10)
		{
			nb2 = nb2 / 10;
			exp = exp * 10;
		}
		ft_putchar(nb / exp + 48);
		nb = nb % exp;
		exp = 1;
	}
	ft_putchar(nb + 48);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_pos(2);
		ft_putnbr_pos(147483648);
	}
	else if (nb > 0)
	{
		ft_putnbr_pos(nb);
	}
	else
	{
		ft_putchar('-');
		nb++;
		nb = -nb;
		nb++;
		ft_putnbr_pos(nb);
	}
}
