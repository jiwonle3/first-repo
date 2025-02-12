/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 22:59:20 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/11 22:46:17 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	a = nb * ft_recursive_factorial(nb - 1);
	return (a);
}
