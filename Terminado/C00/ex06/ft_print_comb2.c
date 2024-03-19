/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:42:33 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/02 16:50:42 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int n)
{
	n += '0';
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	v_left;
	int	v_right;

	v_left = 0;
	while (v_left <= 98)
	{
		v_right = v_left + 1;
		while (v_right <= 99)
		{
			print_digit(v_left / 10);
			print_digit(v_left % 10);
			write(1, " ", 1);
			print_digit(v_right / 10);
			print_digit(v_right % 10);
			if (v_left != 98 || v_right != 99)
			{
				write(1, ", ", 2);
			}
			v_right ++;
		}
		v_left ++;
	}
}
