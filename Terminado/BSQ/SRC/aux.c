/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:58:36 by jora              #+#    #+#             */
/*   Updated: 2024/03/20 12:03:35 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

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

char	*get_firstline(char	**map, char *filename)
{
	int		i;
	int		fd;
	char	c;
	char	*fl;

	i = 0;
	fl = (char *)malloc (50 * sizeof(char));
	if (fl == NULL)
		exit (1);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error reading file\n", 19);
		exit (1);
	}
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		else
			fl[i++] = c;
	}
	return (fl);
}

char	*ft_malloc(char *str)
{
	str = (char *)malloc (100 * sizeof(char));
	if (*str == NULL)
	{
		write (1, "Malloc error\n", 13);
		exit (1);
	}
	else
		return (str);
}

void	open_file(char *filename, int *fd)
{
	*fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error reading file\n", 19);
		exit (1);
	}
}