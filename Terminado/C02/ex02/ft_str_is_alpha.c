/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:35:45 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/07 11:34:37 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if ((str[i] > 90 || str[i] < 65) && (str[i] > 122 || str[i] < 97))
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
	int	a = ft_str_is_alpha("");
	if (a == 0)
		write(1, "0", 1);
	else
		write(1, "1", 1);
	return 0;
}
*/