/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 04:38:32 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/30 05:28:34 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	a;
	int	c;
	int	d;

	a = 0;
	c = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v')
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			c *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		a = a * 10;
		d = *str - '0';
		a += d;
		str++;
	}
	return (a * c);
}

int	main(int argc, char *argv[])
{
	int	a;

	if (argc != 2)
		return (-1);
	a = ft_atoi(argv[1]);
	printf("%d", a);
	return (0);
}
