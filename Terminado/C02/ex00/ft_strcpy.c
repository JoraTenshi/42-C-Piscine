/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:16:06 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/10 10:35:26 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	desti[] = "Esto es una prueba ";

	ft_strcpy(desti, "Hello worldjkhdsfjkdsghjkfdshjkfgdshjfgdhjsgfjhdsgf");
	printf("%s", desti);
	return (0);
}
*/