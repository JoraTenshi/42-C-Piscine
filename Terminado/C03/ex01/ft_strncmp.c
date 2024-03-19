/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:16:33 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/14 10:51:48 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	array[10] = "Hola ";
	char	string[10] = "Hola";
	int	value;
	value = ft_strncmp(array, string, 5);
	if (value == 0)
		printf("Equal\n");
	else
		printf("Unequal\n");
	printf("Return = %d", value);
	return 0;
}
*/