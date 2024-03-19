/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:39:27 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/08 13:09:24 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	sorc[] = "Hello World2345678901";
	char	desti[20];
	unsigned int	copy;

	copy = ft_strlcpy(desti, sorc, sizeof(desti));
	printf("Copied: %u\n", copy);
	printf("Destination string: %s\n", desti);

    return 0;
}
*/