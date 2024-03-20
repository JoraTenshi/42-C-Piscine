/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:05:17 by jora              #+#    #+#             */
/*   Updated: 2024/03/20 20:33:38 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	check_position(char *position, char *filename)
{
	char	*aux;
	int		i;
	int		len;

	i = 0;
	aux = get_firstline(map, filename);
	len = ft_strlen(aux);
	while (aux[i] != '\0')
	{
		if (*position == aux[len - 3])
			return (1);
		i++;
	}
	return (0);
}

int	check_i(char **map, int i, int j)
{
	if (check_position(map[i + 1][j]) == 1)
	{
		rows = i + 1;
		return (1);
	}
	return (0);
}

int	check_size(char **map, int rows, int columns)
{
	int	i;
	int	j;

	while (map[i][j] != '\0' && i < rows)
	{
		j = 0;
		while (map[i][j] != '\0' && j <= columns)
		{
			if (check_position(map[i][j + 1] == 1))
				break ;
			else if (check_i(map, i, j) == 1)
				break ;
			j++;
		}
		columns = j;
		i++;
	}
	while (rows != columns)
	{
		if (rows < columns)
			columns--;
		else
			rows--;
	}
	return (rows);
}

void	print_bsq(char **map)
{
	
}

char	*find_bsq(char **map, char *filename, int rows, int columns)
{
	int		i;
	int		j;
	char	*fl;

	i = 0;
	columns = rows;
	while (map[i][j] != '\0')
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			
		}
	}
}
