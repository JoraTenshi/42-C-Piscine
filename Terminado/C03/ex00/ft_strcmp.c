/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:17:33 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/09 09:13:39 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>

int	main(void)
{
	char	array[10] = "Holaá";
	char	string[10] = "Hola";
	int	value;
	value = ft_strcmp(array, string);
	if (value == 0)
		printf("Equal\n");
	else
		printf("Unequal\n");
	printf("Return = %d", value);
	return 0;
}
*/