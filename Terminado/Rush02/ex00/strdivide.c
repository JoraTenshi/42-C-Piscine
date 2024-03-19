/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdivide.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 18:03:34 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/17 12:32:25 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*swap(int size, char *str)
{
	int		i;
	int		j;
	char	*swap;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		*swap = str[i];
		str[i] = str[j];
		str[j] = *swap;
		i++;
		j--;
	}
	return (str);
}

void	divide(char *str)
{
	char	*aux;
	char	**list;
	int		len;
	int		i;

	len = ft_strlen(str);
	aux = (char *)malloc(100 * sizeof(char));
	while (len > 1)
	{
		i = 1;
		while (i < len)
		{
			*aux = str[0];
			str[i] = '0';
			i++;
		}
		swap(len, str);
		len--;
		swap(len, str);
	}
	free(aux);
}
