/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 09:31:56 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/12 09:47:02 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
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
	res = ft_iterative_power(n, p);
	printf ("El resultado es %d\n", res);
	return (0);
}
*/