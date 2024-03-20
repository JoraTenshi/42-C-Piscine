/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:31:31 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:19:45 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*aux;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	aux = (char *)malloc(len * sizeof (char));
	if (aux == NULL)
		return (0);
	while (src[i] != '\0')
	{
		aux[i] = src[i];
		i++;
	}
	return (aux);
}
/*
#include <stdio.h>

int	main(void)
{
	int		a;
	char	array[] = "Hola";

	a = 0;
	if (ft_strdup(array) == 0)
		printf("Malloc no funciona\n");
	else
		printf("Malloc funciona\nEl string es %s\n", ft_strdup(array));
	return 0;
}
*/