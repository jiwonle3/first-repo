/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:23:29 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/02 17:35:30 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//맵을 0으로 채움//

void	clear_map(int (*map)[4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			map[row][col] = 0;
			col++;
		}
		row++;
	}
}
//숫자와 공백 출력//

void	print_map(int (*map)[4])
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			c = map[row][col] + '0';
			write(1, &c, 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
