/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:06:12 by hugim             #+#    #+#             */
/*   Updated: 2025/01/26 15:28:53 by hugim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);

int	atoi(char *argv)
{
	char	*insp;
	int		result;
	int		tmp;

	insp = argv;
	while (*insp)
	{
		if (*insp <= 48 || *insp >= 57)
			return (-1);
		insp++;
	}
	result = *argv - '0';
	argv++;
	while (*argv)
	{
		tmp = *argv - '0';
		result = (result * 10) + tmp;
		argv++;
	}
	return (result);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (argc != 4)
		return (-1);
	x = atoi(argv[2]);
	if (x < 0)
		return (-1);
	y = atoi(argv[3]);
	if (atoi(argv[1]) == 1)
		rush00(x, y);
	else if (atoi(argv[1]) == 2)
		rush01(x, y);
	else if (atoi(argv[1]) == 3)
		rush02(x, y);
	else if (atoi(argv[1]) == 4)
		rush03(x, y);
	else if (atoi(argv[1]) == 5)
		rush04(x, y);
	else
		return (-1);
	return (0);
}
