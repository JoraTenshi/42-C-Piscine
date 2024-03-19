/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:47:11 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/13 12:00:53 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = 4;
	printf("El número es %d\n", n);
	if (ft_sqrt(n) == 0)
		printf("El número no es racional");
	else
		printf("La raiz del numero es %d\n", ft_sqrt(n));
	return (0);
}
*/