/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:46:27 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/11 22:51:41 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(int board[])
{
	char	result[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		result[i] = board[i] + '0';
		i++;
	}
	write(1, result, 10);
	write(1, "\n", 1);
}

int	ft_check(int board[], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row
			|| (col - i) == (row - board[i])
			|| (col - i) == (board[i] - row))
			return (0);
		i++;
	}
	return (1);
}

void	ft_solve(int board[], int col, int *count)
{
	int	row;

	if (col == 10)
	{
		ft_print(board);
		(*count)++;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (ft_check(board, row, col))
		{
			board[col] = row;
			ft_solve(board, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	ft_solve(board, 0, &count);
	return (count);
}
