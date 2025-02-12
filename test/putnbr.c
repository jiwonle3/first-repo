/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:16:07 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/30 03:41:56 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	itoa1(int a, char *str)
{
	int		tmp;
	int		b;
	char	c;

	tmp = a;
	b = 0;
	while (tmp != 0)
	{
		tmp /= 10;
		b++;
	}
	str[b] = 0;
	while (a != 0)
	{
		b--;
		c = a % 10;
		if (c < 0)
			c = -c;
		c += 48;
		str[b] = c;
		a /= 10;
	}
}

void	print(char *sss, int qqq, int a)
{
	char	p;
	char	u;
	char	w;

	w = 45;
	p = 34;
	u = '\n';
	write(1, &p, 1);
	if (a == 1)
	{
		write(1, &w, 1);
	}
	write(1, sss, qqq);
	write(1, &p, 1);
	write(1, &u, 1);
}

int	ex(int qqq)
{
	char	abc[12];
	int		len;
	int		w;

	w = 0;
	if (qqq == -2147483648)
		write(1, "-2147483648", 12);
	else if (qqq == 2147483647)
		write(1, "2147483647", 11);
	else if (qqq < 0)
	{
		itoa1(qqq, abc);
		len = 0;
		while (abc [len] != 0)
			len++;
		len++;
		w++;
		print(abc, len, w);
		return (0);
	}
	return (qqq);
}

void	ft_putnbr(int nb)
{
	char	abc[12];
	int		len;
	int		w;
	char	b;

	b = 48;
	w = 0;
	ex(nb);
	if (nb == 0)
	{
		write(1, &b, 1);
		return ;
	}
	else if (nb > 0)
	{
		itoa1(nb, abc);
		len = 0;
		while (abc[len] != 0)
			len++;
		print(abc, len, w);
	}
}

int	main(void)
{
	ft_putnbr(-11123);
	return (0);
}
