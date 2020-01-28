/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:05:31 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:05:41 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s1[j] != '\0')
		j++;
	len = (j < n) ? j : n;
	if (!(s2 = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s1 && i < len)
	{
		s2[i] = *(s1++);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
