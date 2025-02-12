/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1recen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:53:22 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/04 18:53:37 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	null(char *str, int size)
{
	int	i;
	i = -1;
	while (++i < size)
		str[i] = 0;
}

int	asd(int c, char *arr)
{
	if (arr[c] == 0)
		arr[c] = 1;
	if (arr[c] <= 0)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	char	arr[128];

	null(arr, 128);
	if (argc == 3)
	{
		while (*argv[2])
		{
			asd(*argv[2], arr);
			argv[2]++;
		}
		while (*argv[1])
		{
			if (asd(*argv[1], arr))
			{
				write(1, argv[1], 1);
				arr[(unsigned char)*argv[1]] = -1;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
