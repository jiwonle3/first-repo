/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 07:49:17 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/02 08:02:45 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		i = 0;
		while (*(str + i) == *(to_find + i))
		{
			++i;
			if (*(to_find + i) == '\0')
				return (str);
		}
		++str;
	}
	return (0);
}
