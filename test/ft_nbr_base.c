/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 09:44:29 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/30 10:50:47 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	nbr_error(char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[a] != 0)
	{
		b = a;
		if (base[a] == '+' || base[a] == '-' || base[a] == ' ')
			return (1);
		while (base[b] !=0)
		{
			if (base[a] == base[b] && a != b)
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
	{
		len++;
	}
	return (len);
}


void	ft_nbr(int nbr, char *base)
{
	int	len;
	int	co;

	co = nbr_error(base);
	len = base_co(base);
	if (co != 1)
	{
		if (nbr < 0)
		{
			print('-');
			nbr = -nbr;
		}
		else if (nbr < len)
		{
			print(base[nbr]);
		}
		else
		{
			ft_nbr(nbr / len, base);
			ft_nbr(nbr % len, base);
		}
	}
}

int	main(void)
{
	ft_nbr(0, "01234567");
	return 0;
}
