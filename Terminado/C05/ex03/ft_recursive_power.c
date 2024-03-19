/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:40:55 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/14 16:50:59 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;
	int	p;
	int	res;

	n = 3;
	p = 3;
	printf("Los numeros son %d y %d\n", n, p);
	res = ft_recursive_power(n, p);
	printf ("El resultado es %d\n", res);
	return (0);
}
*/