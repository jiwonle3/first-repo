/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 11:04:16 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/08 22:09:41 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	nw;

	i = 0;
	nw = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= 'z')
		{
			if (str[i] <= 57 || (str[i] >= 65 && str[i] <= 90) || str[i] >= 97)
			{
				if (nw && (str[i] >= 'a' && str[i] <= 'z'))
					str[i] -= 32;
				else if (!nw && (str[i] >= 'A' && str[i] <= 'Z'))
					str[i] += 32;
				nw = 0;
			}
			else
				nw = 1;
		}
		else
			nw = 1;
		i++;
	}
	return (str);
}
