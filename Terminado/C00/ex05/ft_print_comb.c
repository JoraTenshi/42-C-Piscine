/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:27:31 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/02 16:46:37 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combination(char p, char s, char t)
{
	if (p < s && s < t)
	{
		write(1, &p, 1);
		write(1, &s, 1);
		write(1, &t, 1);
		if (p != '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	p;
	char	s;
	char	t;

	p = '0';
	while (p <= '7')
	{
		s = '0';
		while (s <= '8')
		{
			t = '0';
			while (t <= '9')
			{
				ft_combination(p, s, t);
				t ++;
			}
			s ++;
		}
		p ++;
	}
}
