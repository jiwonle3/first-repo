/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 06:12:25 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/20 06:28:48 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int	ft_isspace(char c)
{
	return ((9 <= c && c <= 13) || c == ' ');
}

static int	ft_isdigit(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	ans;
	int		sign;

	ans = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		ans = 10 * ans + (*str - '0');
		str++;
	}
	return ((int) sign * ans);
}
