/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 08:55:08 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:48:14 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*aux;
	int		i;
	int		j;
	int		a;
	
	i = 0;
	a = 0;
	aux = (int *)malloc (sizeof(strs) * sizeof(int));
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			aux[a++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size -1)
			aux[a++] = sep[j++];
		i++;
	}
	aux[a] = '\0';
	return (aux);
}
