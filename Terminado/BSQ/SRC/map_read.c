/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:58:36 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:07:57 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

void	read_map(char *filename, char **map, char *rows, char *columns)
{
	int		fd;
	int		row;
	int		column;
	char	c;

	open_file(filename, &fd);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
		{
			*columns = column;
			row++;
			column = 0;
		}
		else
			map[row][column++] = c;
	}
	*rows = row;
	close(fd);
	check_square(map, filename);
}
