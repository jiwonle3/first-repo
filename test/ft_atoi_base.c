/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 10:51:04 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/04 15:47:32 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	check_minus(char *str, int *i)
{
	int	result;

	result = 1;
	while (str[*i] == '"' || str[*i] == '\t' || str[*i] == '\n' || str[*i] == '\v' || str[*i] == ' ')
		*i += 1;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			result *= -1;
		*i += 1;
	}
	return (result);
}

int	base_dup(char str, char *base)
{
	int	i;
	i = 0;
	while(base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[a])
	{
		if (base[a] == '-' || base[a] == '+' || base[a] == ' ')
			return (0);
		b = a;
		while (base[b])
		{
			if (base[a] == base[b] && a != b)
				return (0);
			b++;
		}
		a++;
	}
	return (a);
}

int	ft_atoi(char *str, char *base)
{
	int	minus;
	int	base_val;
	int	fir;
	int	i;
	int	zero;

	i = 0;
	minus = check_minus(str, &i);
	base_val = check_base(base);
	fir = 0;
	zero = 0;

	if (base_val >= 2)
	{
		fir = base_dup(str[i], base);
		while (fir != -1)
		{
			zero = (zero * base_val) + fir;
			i++;
			fir = base_dup(str[i], base);
		}
		return (zero * minus);
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_atoi("   ---1231A213", "0123456789ABCDEF"));
}
