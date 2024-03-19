/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:08:11 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/02 16:01:03 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int x)
{
	int	i;

	i = 0;
	while (x > i)
	{
		if (i == 0)
		{
			ft_putchar('/');
			i++;
		}
		else if (i == x - 1)
		{
			ft_putchar('\\');
			i++;
		}
		else
		{
			ft_putchar('*');
			i++;
		}
	}
}

void	print_body(int x)
{
	int	i;

	i = 0;
	while (x > i)
	{
		if (i == 0 || i == x - 1)
		{
			ft_putchar('*');
			i++;
		}
		else
		{
			ft_putchar(' ');
			i++;
		}
	}
}

void	lastline(int x)
{
	int	i;

	i = 0;
	while (x > i)
	{
		if (i == 0)
		{
			ft_putchar('\\');
			i++;
		}
		else if (i == x - 1)
		{
			ft_putchar('/');
			i++;
		}
		else
		{
			ft_putchar('*');
			i++;
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	firstline(x);
	ft_putchar('\n');
	if (y > 1)
	{
		while (y > i)
		{
			print_body(x);
			i++;
			ft_putchar('\n');
		}
		lastline(x);
		ft_putchar('\n');
	}
}
