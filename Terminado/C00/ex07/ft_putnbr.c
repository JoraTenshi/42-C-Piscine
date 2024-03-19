/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 09:38:12 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/05 17:46:30 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int nb)
{
	int	rest;

	if (nb != 0)
	{
		ft_print(nb / 10);
		rest = nb % 10;
		if (rest < 0)
		{
			rest = -rest;
		}
		ft_putchar(rest + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	ft_print(nb);
}
