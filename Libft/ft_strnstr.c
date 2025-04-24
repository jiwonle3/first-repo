/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 05:54:21 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/24 05:04:50 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	idx;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (needle_len > len)
		return (0);
	idx = 0;
	while (idx + needle_len <= len && haystack[idx] != 0)
	{
		if (ft_strncmp(&haystack[idx], needle, needle_len) == 0)
			return ((char *)&haystack[idx]);
		idx++;
	}
	return (0);
}
