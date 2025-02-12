/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:27:52 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/29 21:13:59 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}

char	print(char d)
{
	char	a;
	char	b;
	char	c;

	if (d > 57)
	{
		a = d - 48;
		b = a / 10;
		c = a % 10;
		b += 48;
		c += 48;
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, "\n", 1);
		return (0);
	}
	write(1, &d, 1);
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		a;
	char	b;

	a = ft_strlen(argv[1]);
	b = a + 48;
	if (argc != 2)
		return (-1);
	print(b);
	return (0);
}
