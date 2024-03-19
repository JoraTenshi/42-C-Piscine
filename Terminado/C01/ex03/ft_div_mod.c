/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 11:43:02 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/03 12:00:59 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int ptri;
	int ptrj;

	i = 10;
	j = 5;
	ft_div_mod(i, j, &ptri, &ptrj);
	printf("i=%d j=%d Resultado=%d Resto=%d", i, j,  ptri, ptrj);
	return 0;
}
*/
