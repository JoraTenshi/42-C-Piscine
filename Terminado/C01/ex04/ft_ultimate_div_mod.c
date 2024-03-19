/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 12:01:25 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/03 12:13:49 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*
#include <stdio.h>

int main(void)
{
	int i;
	int j;

	i = 10;
	j = 5;
	printf("i=%d j=%d", i, j);
	ft_ultimate_div_mod(&i, &j);
	printf("Resultado=%d Resto=%d", i, j);
	return 0;
}
*/
