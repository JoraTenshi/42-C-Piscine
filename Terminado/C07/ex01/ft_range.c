/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 13:25:04 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/15 12:20:51 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*aux;

	i = 0;
	aux = (int *)malloc((max - min) * sizeof (int));
	if (min >= max)
		return (0);
	if (aux == NULL)
		return (aux = NULL);
	while (max > min)
	{
		aux[i] = min;
		min++;
		i++;
	}
	return (aux);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*ptr;
	int	size;

	ptr = ft_range(1, 6);
	size = sizeof(ptr);
	while (*ptr)
	{
		printf("%d ", *ptr);
		ptr++;
	}
	return (0);
}
*/