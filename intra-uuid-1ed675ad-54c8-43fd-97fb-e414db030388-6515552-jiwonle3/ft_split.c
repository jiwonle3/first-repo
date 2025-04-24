/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:52:20 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/24 04:29:47 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_allfree(char **res)
{
	size_t	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	size;

	if (!s[0])
		return (0);
	i = 0;
	size = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			size++;
			while (s[i] && s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (s[i - 1] != c)
		size++;
	return (size);
}

static size_t	ft_getlen(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	**ft_result(char **res, const char *s, size_t size, char c)
{
	char	*str;
	size_t	i;
	size_t	word_len;

	i = 0;
	str = (char *)s;
	word_len = 0;
	while (i < size)
	{
		while (*str == c)
			str++;
		word_len = ft_getlen(str, c);
		res[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!(res[i]))
			return (ft_allfree(res));
		ft_strlcpy(res[i], str, word_len + 1);
		str += word_len;
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	if (!res)
		return (NULL);
	return (ft_result(res, s, size, c));
}
