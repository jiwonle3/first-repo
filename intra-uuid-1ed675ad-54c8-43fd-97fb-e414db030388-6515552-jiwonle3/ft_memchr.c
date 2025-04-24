/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 04:38:12 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/24 04:27:18 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	check;

	str = (unsigned char *) s;
	check = (unsigned char) c;
	while (n > 0)
	{
		if (*str == check)
			return ((void *) str);
		str++;
		n--;
	}
	return (0);
}
