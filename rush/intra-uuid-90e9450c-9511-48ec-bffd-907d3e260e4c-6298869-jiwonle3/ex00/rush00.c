/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:15:11 by hugim             #+#    #+#             */
/*   Updated: 2025/01/26 11:58:46 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print00(int x, int y, int row, int col)
{
	if (col == 0 || col == y)
	{
		if (row == 0 || row == x)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (row == 0 || row == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush00(int x, int y)
{
	int	row;
	int	col;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print00(x - 1, y - 1, row, col);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
