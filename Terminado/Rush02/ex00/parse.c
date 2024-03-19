/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:36:14 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/17 12:26:30 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	**fill_numbers(char *c, char **numbers)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (numbers[i][j] != '\0')
		{
			if (c[a] >= '0' || c[a] <= '9')
				numbers[i][j] = c[a];
			j++;
		}
		i++;
		a++;
	}
	return (numbers);
}

char	**fill_letters(char *c, char **letters)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (letters[i][j] != '\0')
		{
			if (c[a] >= 'a' || c[a] <= 'z'
				|| c[a] >= 'A' || c[a] >= 'Z')
				letters[i][j] = c[a];
			j++;
		}
		i++;
		a++;
	}
	return (letters);
}

void	parse(void)
{
	int		fd;
	int		i;
	char	*c;
	char	**numbers;
	char	**letters;

	i = 0;
	c = (char *)malloc(100 * sizeof(char));
	fd = open("numbers.dict", 0);
	i = read(fd, c, 1000);
	c[i] = '\0';
	close(fd);
	fill_numbers(c, numbers);
	fill_letters(c, letters);
	free(c);
}
