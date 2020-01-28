/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:02:39 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:02:47 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		j;
	char				*res;

	j = 0;
	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(res = (char *)malloc(sizeof(char) * i + 1)))
		return (NULL);
	while (s[j])
	{
		res[j] = f(j, s[j]);
		j++;
	}
	res[j] = '\0';
	return (res);
}
