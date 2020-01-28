/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:58:33 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/01 23:58:43 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	calc;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	calc = ft_strlen(s1) + ft_strlen(s2);
	if (!(res = (char *)malloc(sizeof(char) * (calc + 1))))
		return (NULL);
	while (*s1)
	{
		res[i] = *(s1++);
		i++;
	}
	while (*s2)
	{
		res[i] = *(s2++);
		i++;
	}
	res[i] = '\0';
	return (res);
}
