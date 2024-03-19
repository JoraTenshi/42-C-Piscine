/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:03:37 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/03 11:15:14 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int *ptri;
	int *ptrj;

	i = 2;
	j = 4;
	ptri = &i;
	ptrj = &j;
	ft_swap(ptri, ptrj);
	printf("i = %d j = %d", i, j);
   return 0;	
}
*/
