/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:49:39 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/19 18:38:27 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	read_map(char *filename, char **map, char *rows, char *columns);
void	is_valid(char *filename);

int	main(int argc, char **argv)
{
	char	**map;
	int		rows;
	int		columns;
	int		i;

	i = 1;
	aux = (char *)malloc (100 * sizeof(char));
	if (argc < 2)
	{
	}
	else
	{
		while (i < argc)
		{
			is_valid(argv[i]);
			read_map(argv[i], map, rows, columns);
			i++;
		}
	}
}
