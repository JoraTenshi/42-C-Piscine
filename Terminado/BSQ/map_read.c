/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:58:36 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/19 18:36:14 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	check_square(char **map, char *filename);

void	open_file(char *filename, int *fd)
{
	*fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error reading file\n", 19);
		exit (1);
	}
}

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
