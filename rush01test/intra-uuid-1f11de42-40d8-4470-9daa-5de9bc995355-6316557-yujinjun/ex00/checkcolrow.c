/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolrow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:26:20 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/02 17:34:45 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//위에서 아래로 입력받은 숫자와 see(보이는 상자의 수) 비교///
//처음 본 숫자보다 다음 숫자가 더 클시 high에 대입,  see 증가//

int	col_up(int (*map)[4], int *colrow)
{
	int	row;
	int	col;
	int	high;
	int	see;

	col = 0;
	while (col < 4)
	{
		row = 0;
		high = 0;
		see = 0;
		while (row < 4)
		{
			if (map[row][col] > high)
			{
				high = map[row][col];
				see++;
			}
			row++;
		}
		if (see != colrow[col])
			return (0);
		col++;
	}
	return (1);
}
//아래에서 위로//

int	col_down(int (*map)[4], int *colrow)
{
	int	row;
	int	col;
	int	high;
	int	see;

	col = 0;
	while (col < 4)
	{
		row = 3;
		high = 0;
		see = 0;
		while (row >= 0)
		{
			if (map[row][col] > high)
			{
				high = map[row][col];
				see++;
			}
			row--;
		}
		if (see != colrow[4 + col])
			return (0);
		col++;
	}
	return (1);
}
//좌에서 우//

int	row_left(int (*map)[4], int *colrow)
{
	int	row;
	int	col;
	int	high;
	int	see;

	row = 0;
	while (row < 4)
	{
		col = 0;
		high = 0;
		see = 0;
		while (col < 4)
		{
			if (map[row][col] > high)
			{
				high = map[row][col];
				see++;
			}
			col++;
		}
		if (see != colrow[8 + row])
			return (0);
		row++;
	}
	return (1);
}
//우에서 좌//

int	row_right(int (*map)[4], int *colrow)
{
	int	row;
	int	col;
	int	high;
	int	see;

	row = 0;
	while (row < 4)
	{
		col = 3;
		high = 0;
		see = 0;
		while (col >= 0)
		{
			if (map[row][col] > high)
			{
				high = map[row][col];
				see++;
			}
			col--;
		}
		if (see != colrow[12 + row])
			return (0);
		row++;
	}
	return (1);
}
//모두 만족해야 참//

int	check_colrow(int (*map)[4], int *colrow)
{
	if (!col_up(map, colrow))
		return (0);
	if (!col_down(map, colrow))
		return (0);
	if (!row_left(map, colrow))
		return (0);
	if (!row_right(map, colrow))
		return (0);
	return (1);
}
