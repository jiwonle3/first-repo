/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 04:28:53 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/12 08:24:29 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	char_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == 0)
		return (1);
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (char_sep(str[i + 1], charset) == 1
			&& char_sep(str[i], charset) == 0)
			word++;
		i++;
	}
	return (word);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_sep(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = 0;
}

void	write_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	word;

	word = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (char_sep(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_sep(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		word;

	word = count_word(str, charset);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	res[word] = 0;
	write_split(res, str, charset);
	return (res);
}
