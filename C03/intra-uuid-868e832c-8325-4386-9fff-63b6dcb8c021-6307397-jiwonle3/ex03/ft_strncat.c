/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 08:09:05 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/02 08:13:09 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
		i++;
	while (src[a] != '\0' && nb > 0)
	{
		dest[i] = src[a];
		i++;
		a++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
