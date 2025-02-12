/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:27:05 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/01 22:49:47 by sangminp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_colrow(int (*map)[4], int *colrow);
void	print_map(int (*map)[4]);
void	clear_map(int (*map)[4]);

int	col_row(char **argv, int *colrow)
{
	int	ch;
	int	i;

	ch = 0;
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			colrow[ch] = argv[1][i] - '0';
			ch++;
		}
		else if (argv[1][i] != ' ')
			return (1);
		i++;
	}
	if (ch != 16)
		return (1);
	return (0);
}

int	check_place(int (*map)[4], int i, int j, int n)
{
	int	k;

	k = 0;
	while (k < 4)
	{
		if (map[i][k] == n)
			return (0);
		if (map[k][j] == n)
			return (0);
		k++;
	}
	return (1);
}

int	fill_map(int (*map)[4], int git, int *colrow)
{
	int	i;
	int	j;
	int	n;

	if (git == 16)
	{
		if (check_colrow(map, colrow))
			return (1);
		return (0);
	}
	i = git / 4;
	j = git % 4;
	n = 1;
	while (n <= 4)
	{
		if (check_place(map, i, j, n))
		{
			map[i][j] = n;
			if (fill_map(map, git + 1, colrow))
				return (1);
			map[i][j] = 0;
		}
		n++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	map[4][4];
	int	colrow[16];

	if (argc != 2 || col_row(argv, colrow))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	clear_map(map);
	if (fill_map(map, 0, colrow))
		print_map(map);
	else
		write(1, "Error\n", 6);
	return (0);
}
