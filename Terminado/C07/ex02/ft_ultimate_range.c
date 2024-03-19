/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:23:21 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/15 12:27:18 by jcallejo         ###   ########.fr       */
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
		*range[i] = min;
		min++;
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	**p = NULL;
	int	*ptr = NULL;

	*ptr = ft_ultimate_range(p, 1, 6);
	**p = *ptr;
	printf("%d ", **p);
	return (0);
}
