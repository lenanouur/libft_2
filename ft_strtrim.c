/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:08:15 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:08:24 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_func(char const c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	while (s1 && ft_func(*s1, set))
		s1++;
	size = ft_strlen(s1) - 1;
	while (size > 0 && ft_func(s1[size], set))
		size--;
	if (s1 == '\0')
		return (ft_calloc(1, sizeof(char)));
	s2 = ft_substr(s1, 0, size + 1);
	return (s2);
}
