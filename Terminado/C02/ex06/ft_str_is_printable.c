/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:56:22 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/05 18:59:33 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] < 32 || str[i] > 126))
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
	int	a = ft_str_is_printable(" !~/@é");
	if (a == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	return 0;
}
*/