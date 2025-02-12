/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 03:51:13 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/09 03:57:13 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
