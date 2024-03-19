/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:45:00 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/11 16:26:15 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	i;

	i = 0;
	a = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && a == 0)
	{
		if (s1[i] != s2[i])
			a = s1[i] - s2[i];
		i++;
	}
	return (a);
}

void	ft_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[i]) < 0)
			{
				aux = argv[j];
				argv[j] = argv[i];
				argv[i] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	ft_sort(argc, argv);
	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			write(1, &argv[a][b], 1);
			b++;
		}
		write (1, "\n", 1);
		a++;
	}
	return (0);
}
