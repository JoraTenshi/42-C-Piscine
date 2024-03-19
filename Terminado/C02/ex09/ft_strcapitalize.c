/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:46:57 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/06 18:37:43 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 90 && str[i] >= 65)
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_strlowcase(str);
	while (str[a] != '\0')
	{
		if ((str[a] <= 122 && str[a] >= 97) || (str[a] >= '0' && str[a] <= '9'))
		{
			if (b == 1 && (str[a] <= 122 && str[a] >= 97))
				str[a] -= 32;
			b = 0;
			a++;
		}
		else if ((str[a] < 97 || str[a] > 122) || (str[a] < 48 || str[a] > 57))
		{
			b = 1;
			a++;
		}
	}
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char	ptr[] = "   hola 4buenas tardes";

	printf("%s\n", ft_strcapitalize(ptr));
	return 0;
}
*/