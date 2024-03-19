/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:45:42 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/05 18:47:11 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] > 'Z' || str[i] < 'A'))
				return (0);
			else
				i++;
		}
		return (1);
	}
}
/*
#include <unistd.h>

int	main(void)
{
	int	a = ft_str_is_uppercase("HOLA");
	if (a == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	return 0;
}
*/