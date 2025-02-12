/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolrow.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:26:20 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/01 22:49:40 by sangminp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int (*map)[4], int *colrow)
{
	int	i;
	int	j;
	int	max;
	int	ch;

	j = 0;
	while (j < 4)
	{
		i = 0;
		max = 0;
		ch = 0;
		while (i < 4)
		{
			if (map[i][j] > max)
			{
				max = map[i][j];
				ch++;
			}
			i++;
		}
		if (ch != colrow[j])
			return (0);
		j++;
	}
	return (1);
}

int	col_down(int (*map)[4], int *colrow)
{
	int	i;
	int	j;
	int	max;
	int	ch;

	j = 0;
	while (j < 4)
	{
		i = 3;
		max = 0;
		ch = 0;
		while (i >= 0)
		{
			if (map[i][j] > max)
			{
				max = map[i][j];
				ch++;
			}
			i--;
		}
		if (ch != colrow[4 + j])
			return (0);
		j++;
	}
	return (1);
}

int	row_left(int (*map)[4], int *colrow)
{
	int	i;
	int	j;
	int	max;
	int	ch;

	i = 0;
	while (i < 4)
	{
		j = 0;
		max = 0;
		ch = 0;
		while (j < 4)
		{
			if (map[i][j] > max)
			{
				max = map[i][j];
				ch++;
			}
			j++;
		}
		if (ch != colrow[8 + i])
			return (0);
		i++;
	}
	return (1);
}

int	row_right(int (*map)[4], int *colrow)
{
	int	i;
	int	j;
	int	max;
	int	ch;

	i = 0;
	while (i < 4)
	{
		j = 3;
		max = 0;
		ch = 0;
		while (j >= 0)
		{
			if (map[i][j] > max)
			{
				max = map[i][j];
				ch++;
			}
			j--;
		}
		if (ch != colrow[12 + i])
			return (0);
		i++;
	}
	return (1);
}

int	check_colrow(int (*map)[4], int *colrow)
{
	if (col_up(map, colrow) && col_down(map, colrow) && \
			row_left(map, colrow) && row_right(map, colrow))
		return (1);
	else
		return (0);
}
