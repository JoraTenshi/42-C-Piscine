/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:04:38 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/12 13:48:52 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	a;

	i = 0;
	j = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0')
		a++;
	if (size <= i)
		a += size;
	else
		a += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	char	desti[100] = "Hello ";

	printf("%u", ft_strlcat(desti, "World", 20));
	return (0);
}
*/