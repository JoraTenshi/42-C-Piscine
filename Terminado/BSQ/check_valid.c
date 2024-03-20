/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:59:36 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 10:57:20 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	open_file(char *filename, int *fd)
{
	*fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error reading file\n", 19);
		exit (1);
	}
}

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

void	check_first_line(char *cstr)
{
	int	a;
	int	b;

	a = 0;
	while (cstr[a] != '\0')
	{
		b = a + 1;
		while (cstr[b] != '\0')
		{
			if (cstr[b] == cstr[a])
			{
				write(1, "map error\n", 10);
				exit (1);
			}
			b++;
		}
		a++;
	}
}

char	*ft_malloc(char *str)
{
	str = (char *)malloc (50 * sizeof(char));
	if (*str == NULL)
	{
		write (1, "Malloc error\n", 13);
		exit (1);
	}
	else
		return (str);
}

void	is_valid(char *filename)
{
	char	*cstr;
	char	c;
	int		fd;
	int		i;
	int		csize;

	i = 0;
	open_file(filename, &fd);
	ft_malloc(cstr);
	csize = ft_strlen(cstr);
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		else
			cstr[i++] = c;
	}
	i = 0;
	while ((cstr[i] >= 48 && cstr[i] <= 57) && (i < csize - 5))
		i++;
	check_first_line(cstr[i]);
	free (cstr);
}
