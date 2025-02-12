/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clearprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangminp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 19:23:29 by sangminp          #+#    #+#             */
/*   Updated: 2025/02/01 22:49:37 by sangminp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	clear_map(int (*map)[4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_map(int (*map)[4])
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = map[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
