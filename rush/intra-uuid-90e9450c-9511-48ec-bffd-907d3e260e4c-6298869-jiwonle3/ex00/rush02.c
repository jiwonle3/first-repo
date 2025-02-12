/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:54:17 by sobpark           #+#    #+#             */
/*   Updated: 2025/01/26 12:48:20 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print02(int x, int y, int col, int row)
{
	if (col == 0)
	{
		if (row == 0 || row == x)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else if (col == y)
	{
		if (row == 0 || row == x)
			ft_putchar('c');
		else
			ft_putchar('B');
	}
	else
	{
		if (row == 0 || row == x)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush02(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print02(x - 1, y - 1, col, row);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
