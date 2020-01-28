/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:37:38 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/01 23:37:54 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void		*str;
	size_t		mult;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mult = count * size;
	if (!(str = malloc(mult)))
		return (NULL);
	ft_bzero(str, mult);
	return (str);
}
