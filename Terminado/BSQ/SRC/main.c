/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jora <jora@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:49:39 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/20 12:08:41 by jora             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	main(int argc, char **argv)
{
	char	**map;
	int		rows;
	int		columns;
	int		i;

	i = 1;
	if (argc < 2)
	{
	}
	else
	{
		while (i < argc)
		{
			is_valid(argv[i]);
			read_map(argv[i], map, &rows, &columns);
			i++;
		}
	}
}
