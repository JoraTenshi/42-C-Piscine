/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:36:14 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/17 12:21:03 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void	parse(void)
{
	int		fd;
	int		df;
	int		i;
	char	*c;

	i = 0;
	c = (char *)malloc(100 * sizeof(char));
	fd = open("numbers.dict", 0);
	i = read(fd, c, 1000);
	printf("%d, c, 10\n%d leido\n", fd, i);
	c[i] = '\0';
	printf("%s\n", c);
	df = close(fd);
	printf("%d\n", df);
}

int	main(void)
{
	parse();
	return (0);
}
