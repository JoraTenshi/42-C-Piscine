/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:23:21 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:32:34 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*aux;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	aux = (int *)malloc ((max - min) * sizeof (int));
	if (aux == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = aux;
	while (max > min)
	{
		aux[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*temp;
	int	i;
	int	size;

	i = 0;
	size = ft_ultimate_range(&temp, 1, 6);
	while (i < size)
	{
		printf("%d\n", temp[i]);
		i++;
	}
	return (0);
}
*/