/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <jiwonle3@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 13:23:01 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/02/02 07:37:16 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int				a;
	unsigned char	ss1;
	unsigned char	ss2;

	a = 0;
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
		{
			ss1 = s1[a];
			ss2 = s2[a];
			return (ss1 - ss2);
		}
		a++;
	}
	return (0);
}
