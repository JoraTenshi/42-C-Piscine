/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 08:54:59 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/12 09:28:01 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (nb)
		aux *= (nb--);
	return (aux);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = 5;
	printf("El número es %d\n", nb);
	nb = ft_iterative_factorial(nb);
	printf("Su factorial es %d\n", nb);
	return (0);
}
*/