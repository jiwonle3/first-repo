/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 02:31:49 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/12 00:10:43 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_power(int n, int p);
char	*ft_putnbr_base(int nbr, char *base, int neg);

int	check_val(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (0);
	while (base[i] != 0)
	{
		j = i + 1;
		while (base[j] != 0)
		{
			if (base[i] == base[j] || base[j] == '+'
				|| base[j] == '-' || base[j] == ' '
				|| base[j] == '\t' || base[j] == '\n'
				|| base[j] == '\v' || base[j] == '\f'
				|| base[j] == '\r')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*check_sign(char *str, int *neg)
{
	*neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*neg *= -1;
		str++;
	}
	return (str);
}

char	*ft_atoi(char *str, char *base, int *neg, int *size)
{
	int	i;
	int	j;
	int	val;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	str = check_sign(str, neg);
	while (*str != 0)
	{
		j = -1;
		val = 0;
		while (base[++j] != 0)
			if (*str == base[j])
				val = 1;
		if (val == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	int			neg;
	int			size;
	int			ps;
	int			n;

	nb = 0;
	ps = 0;
	nbr = ft_atoi(nbr, base_from, &neg, &size);
	if (check_val(base_from) == 0 || check_val(base_to) == 0)
		return (NULL);
	while (ps < size)
	{
		n = 0;
		while (base_from[n] != nbr[ps])
			n++;
		nb += n * ft_power(ft_strlen(base_from), (size - ps - 1));
		ps++;
	}
	return (ft_putnbr_base(nb, base_to, neg));
}
