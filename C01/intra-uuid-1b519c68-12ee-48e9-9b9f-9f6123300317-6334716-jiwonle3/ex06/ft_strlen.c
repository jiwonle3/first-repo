/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:08:33 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/01/28 17:22:00 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}	
	return (i);
}

#ifdef TEST

int	main(void)
{
	char	a;

	a = ft_strlen("qweqwe");
	a += 48;
	write(1, &a, 1);
}
#endif
