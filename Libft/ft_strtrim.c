/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 10:20:57 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/24 04:32:28 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	front = 0;
	back = 0;
	while (s1[front] && ft_strchr(set, s1[front]))
		front++;
	back = ft_strlen(s1 + front);
	if (back > 0)
		while (s1[back + front - 1]
			&& ft_strchr(set, s1[back + front - 1]))
			back--;
	trimmed = (char *)malloc(sizeof(char) * (back + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1 + front, back + 1);
	return (trimmed);
}
