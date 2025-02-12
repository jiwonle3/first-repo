/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:29:15 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/08 22:13:43 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	ft_hex(unsigned long long nb, int prev)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb < 16 && prev == 1)
		ft_putchar('0', 1);
	if (nb >= 16)
	{
		ft_hex(nb / 16, 0);
		ft_hex(nb % 16, 0);
	}
	else
		ft_putchar(base[nb], 1);
}

void	ft_print_addr(unsigned long long addr)
{
	unsigned long long	temp;
	int					count;
	int					j;

	temp = addr;
	count = 0;
	if (temp == 0)
		count = 1;
	while (temp)
	{
		temp /= 16;
		count++;
	}
	j = 16 - count;
	while (j-- > 0)
		ft_putchar('0', 1);
	ft_hex(addr, 0);
}

void	ft_print_data(unsigned char *c, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i < size)
			ft_hex((unsigned long long)c[i], 1);
		else
			ft_putchar(' ', 2);
		if (i % 2 == 1)
			ft_putchar(' ', 1);
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (c[i] < 32 || c[i] > 126)
			ft_putchar('.', 1);
		else
			ft_putchar(c[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*c;
	unsigned int	sendsize;

	i = 0;
	c = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			sendsize = 16;
		else
			sendsize = size % 16;
		ft_print_addr((unsigned long long)(c + (i * 16)));
		ft_putchar(':', 1);
		ft_putchar(' ', 1);
		ft_print_data(c + (i * 16), sendsize);
		ft_putchar('\n', 1);
		i++;
	}
	return (addr);
}
