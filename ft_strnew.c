/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:06:00 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:06:06 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = (int)size;
	if ((str = (char*)malloc(sizeof(char) * (i + 1))) == 0)
		return (NULL);
	while (i >= 0)
	{
		str[i] = '\0';
		i--;
	}
	return (str);
}
