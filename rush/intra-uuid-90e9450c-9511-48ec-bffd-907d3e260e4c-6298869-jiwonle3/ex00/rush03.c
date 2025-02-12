/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:09:27 by sobpark           #+#    #+#             */
/*   Updated: 2025/01/26 12:48:42 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print03(int x, int y, int col, int row)
{
	if (col == 0 || col == y)
	{
		if (row == 0)
			ft_putchar('A');
		else if (row == x)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
	{
		if (row == 0)
			ft_putchar('A');
		else if (row == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print03(x - 1, y - 1, col, row);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
