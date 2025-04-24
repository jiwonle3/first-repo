/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 03:42:00 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/24 04:28:01 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	forward(unsigned char *d, const unsigned char *s, size_t len)
{
	while (len-- > 0)
		*d++ = *s++;
}

static void	backward(unsigned char *d, const unsigned char *s, size_t len)
{
	while (len-- > 0)
		*d-- = *s--;
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if ((dst == 0 || src == 0) && len > 0)
		return (0);
	d = (unsigned char *) dst;
	s = (const unsigned char *) src;
	if (d < s)
		forward(d, s, len);
	else if (d > s)
	{
		d += len - 1;
		s += len - 1;
		backward(d, s, len);
	}
	return (dst);
}
