/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 10:03:47 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/12 10:19:01 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux(int n, int a, int b)
{
	if (n == 0)
		return (a);
	else if (n == 1)
		return (b);
	return (aux((n - 1), b, a + b));
}

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	return (aux(index, 0, 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int	n;

	n = 9;
	printf("El numero a buscar es %d\n", n);
	printf("El numero encontrado en Fibonacci es %d\n", ft_fibonacci(n));
	return (0);
}
*/