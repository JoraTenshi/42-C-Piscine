/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:10:25 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:07:16 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

void	check_characters(char **map, char *firstline)
{
	int	i;
	int	j;
	int	a;

	i = 1;
	while (*map[i] != '\0')
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			a = 0;
			while (firstline[a] != '\0')
			{
				if (map[i][j] == firstline[a])
					break ;
				else if (firstline[a] == '\n')
					exit (1);
				a++;
			}
			j++;
		}
		i++;
	}
}

void	is_square(char **map)
{
	int	i;
	int	j;
	int	clen;
	int	rlen;

	i = 1;
	rlen = ft_strlen(map[i]);
	while (*map[i] != '\0')
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			j++;
		}
		if (j != rlen)
			exit (1);
		i++;
	}
}

void	check_square(char **map, char *filename)
{
	char	*firstline;

	is_square(map);
	firstline = get_firstline(map, filename);
	check_characters(map, firstline);
	free(firstline);
}
