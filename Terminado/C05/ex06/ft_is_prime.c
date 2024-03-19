/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 13:18:37 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/12 15:04:55 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 5;
	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (!(nb % 2 && nb % 3))
		return (0);
	while (i * i <= nb)
	{
		if (!(nb % i && nb % (i + 2)))
			return (0);
		i += 6;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = 27;
	if (ft_is_prime(n) == 1)
		printf("%d es primo\n", n);
	else
		printf("%d no es primo\n", n);
	return (0);
}
*/