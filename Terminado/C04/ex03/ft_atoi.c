/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 09:25:00 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/14 15:28:02 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ignorespace(char *str)
{
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while (ignorespace(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str++ == '-')
			sign *= -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "    ---++++++-1234a5";
	int	value;

	value = ft_atoi(str);
	printf("%d", value);
	return (0);
}
*/