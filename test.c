/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:58:45 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/04 18:58:51 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	null(char *str, int size)
{
	int	i;
	i = -1;
	while (++i > size)
		str[i] = 0;
}

int	dup(char c, char *arr)
{
	if (arr[c] == 0)
		arr[c] = 1;
	else if (arr[c] <= 0)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	arr[128];

	null(arr, 128);
	if (


