/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42gyeongsa      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 22:15:25 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/10 03:19:23 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	base_ch(char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[a] != 0)
	{
		if (base[a] == '+' || base[a] == '-')
			return (1);
		b = a + 1;
		while (base[b] != 0)
		{
			if (base[a] == base[b])
				return (1);
			b++;
		}
		a++;
	}
	return (0);
}

int	base_co(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		co;
	long	n;

	co = base_ch(base);
	len = base_co(base);
	n = nbr;
	if (co == 0)
	{
		if (n < 0)
		{
			print('-');
			n = -n;
		}
		if (n >= len)
			ft_putnbr_base(n / len, base);
		print(base[n % len]);
	}
}

int	main()
{
	ft_putnbr_base(0, "ABC");
}
