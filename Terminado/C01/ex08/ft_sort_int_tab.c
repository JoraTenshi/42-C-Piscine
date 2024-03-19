/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:45:36 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/04 13:55:19 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (size * size))
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	array[4];
	int	x;
	
	x = 0;
	array[0] = 5;
	array[1] = 2;
	array[2] = 1;
	array[3] = 4;
	ft_sort_int_tab(array, 4);
	while (x < 4)
	{
		printf("%d\n", array[x]);
		x++;
	}
	return 0;
}
*/
