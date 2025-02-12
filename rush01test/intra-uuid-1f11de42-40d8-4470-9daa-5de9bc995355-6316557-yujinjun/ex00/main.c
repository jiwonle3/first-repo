/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:27:05 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/02 17:37:07 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_colrow(int (*map)[4], int *colrow);
void	print_map(int (*map)[4]);
void	clear_map(int (*map)[4]);
//col_row, 입력 받은 문자열에서 숫자만 저장//
//입력받은 숫자가 16개가 아닌 경우 에러//
//숫자가 공백 한 칸으로 구분되어 있지 않은 경우 에러//

int	col_row(char **argv, int *colrow)
{
	int	idx;
	int	i;

	idx = 0;
	i = 0;
	while (i < 31)
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			colrow[idx] = argv[1][i] - '0';
			idx++;
		}
		if (i > 0)
			if (argv[1][i - 1] != ' ')
				return (1);
		i += 2;
	}
	if (idx != 16)
		return (1);
	return (0);
}
//check_place, 각각의 같은 행과 열에 중복 확인, 없으면 숫자 입력//
//중복일시 num 증가 후 다시 확인//

int	check_place(int (*map)[4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (map[row][i] == num || map[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}
//fill_map, 중복확인 함수 재귀호출을 통해 맵 채움//
//check_colrow로 정답인지 확인//
//정답이 아닐 시 중복이 없을 때 까지 0 으로 채운 후 다시 시작//

int	fill_map(int (*map)[4], int idx, int *colrow)
{
	int	row;
	int	col;
	int	num;

	if (idx == 16)
	{
		if (check_colrow(map, colrow))
			return (1);
		return (0);
	}
	row = idx / 4;
	col = idx % 4;
	num = 1;
	while (num <= 4)
	{
		if (check_place(map, row, col, num))
		{
			map[row][col] = num;
			if (fill_map(map, idx + 1, colrow))
				return (1);
			map[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	map[4][4];
	int	colrow[16];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	clear_map(map);
	if (col_row(argv, colrow) || !fill_map(map, 0, colrow))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_map(map);
	return (0);
}
