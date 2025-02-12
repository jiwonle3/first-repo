/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 08:14:55 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/02 08:47:41 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	j;

	dest_len = len(dest);
	src_len = len(src);
	if (dest_len >= size)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest_len + src_len);
}
