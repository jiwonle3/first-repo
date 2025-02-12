/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 12:08:23 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/02 16:09:17 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;
	char			h[2];
	char			*base;

	base = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c >= 127)
		{
			write(1, "\\", 1);
			h[0] = base[c / 16];
			h[1] = base[c % 16];
			write(1, h, 2);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
