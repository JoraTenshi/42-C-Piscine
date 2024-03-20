/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:59:36 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 18:31:04 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

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
	while (read(fd, &c, 1))
	{
		if (c == '\n')
			break ;
		else
			cstr[i++] = c;
	}
	i = 0;
	csize = ft_strlen(cstr);
	while ((cstr[i] >= 48 && cstr[i] <= 57) && (i < csize - 5))
		i++;
	check_first_line(cstr[i]);
	free (cstr);
}
