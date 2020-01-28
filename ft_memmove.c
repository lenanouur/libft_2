/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:52:48 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/01 23:52:56 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	if (!dst && dst == src)
		return (0);
	if (s <= d)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
