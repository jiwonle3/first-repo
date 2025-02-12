/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:15:21 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/29 21:54:17 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		print(str[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 1;
	if (argc == 1)
		return (-1);
	while (a < argc)
	{
		ft_putstr(argv[a]);
		a++;
	}
	return (0);
}
