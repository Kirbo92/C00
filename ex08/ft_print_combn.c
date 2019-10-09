/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:25:23 by migferna          #+#    #+#             */
/*   Updated: 2019/10/09 16:44:12 by migferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int max;
	int i;
	int it;
	int exp;

	exp = 1;
	max = 0;
	i = 0;
	while (i < n)
	{
		exp = exp * 10;
		i++;
	}
	max = exp - 1;
	it = 0;
	while (it < max)
	{
		ft_putchar(it + 48);
		it++;
	}
}
