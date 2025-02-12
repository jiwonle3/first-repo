/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 23:29:41 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/11 22:46:46 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	a;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	a = nb * ft_recursive_power(nb, power - 1);
	return (a);
}
