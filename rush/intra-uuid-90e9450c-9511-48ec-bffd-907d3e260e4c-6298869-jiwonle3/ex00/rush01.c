/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sobpark <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:52:41 by sobpark           #+#    #+#             */
/*   Updated: 2025/01/26 12:47:53 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	print01(int x, int y, int col, int row)
{
	if (col == 0 || col == y)
	{
		if ((col == 0 && row == 0) || (col == y && row == x))
			ft_putchar('/');
		else if ((col == 0 && row == x) || (col == y && row == 0))
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else
	{
		if (row == 0 || row == x)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush01(int x, int y)
{
	int	col;
	int	row;

	col = 0;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			print01(x - 1, y - 1, col, row);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
