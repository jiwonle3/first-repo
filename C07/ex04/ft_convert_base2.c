/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 03:11:18 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/10 04:22:02 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	ft_power(int n, int p)
{
	int	result;

	result = 1;
	if (p < 0)
		return (0);
	while (p > 0)
	{
		result *= n;
		p--;
	}
	return (result);
}

int	get_len(long int nbr, int size, int neg)
{
	int	i;

	i = 0;
	if (neg == -1)
		i++;
	while (nbr > 0)
	{
		nbr /= size;
		i++;
	}
	return (i);
}

char	*ft_print(long int nbr, char *base, char *res, int neg)
{
	int	i;
	int	size;

	i = 0;
	size = get_len(nbr, ft_strlen(base), neg);
	if (neg == -1)
		res[0] = '-';
	if (nbr == 0)
	{
		res[0] = base[0];
		res[1] = 0;
	}
	while (nbr > 0)
	{
		res[(size - i - 1)] = base[nbr % ft_strlen(base)];
		i++;
		nbr /= ft_strlen(base);
	}
	return (res);
}

char	*ft_putnbr_base(long int nbr, char *base, int neg)
{
	long int	nb;
	char		*res;
	int			size;
	int			len;

	nb = nbr;
	size = ft_strlen(base);
	len = get_len(nb, size, neg);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = 0;
	if ((neg == -1 && len == 1) || (len == 0 && neg == 0))
	{
		res[0] = base[0];
		return (res);
	}
	return (ft_print(nb, base, res, neg));
}
