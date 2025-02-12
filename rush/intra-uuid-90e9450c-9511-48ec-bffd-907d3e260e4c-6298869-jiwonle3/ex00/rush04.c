/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 21:17:23 by sobpark           #+#    #+#             */
/*   Updated: 2025/01/26 12:49:02 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print04(int x, int y, int col, int row)
{
	if (col == 0 || col == y)
	{
		if ((col == 0 && row == 0) || (col == y && row == x))
			ft_putchar('A');
		else if ((col == 0 && row == x) || (col == y && row == 0))
			ft_putchar('C');
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

void	rush04(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print04(x - 1, y - 1, col, row);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
