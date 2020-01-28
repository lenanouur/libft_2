/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 23:45:34 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/01 23:45:48 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_sizecalc(int n)
{
	int	res;

	res = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char					*ft_itoa(int n)
{
	unsigned int		num;
	char				*itoa;
	int					size;

	num = (n < 0 ? -n : n);
	size = ft_sizecalc(n);
	if (!(itoa = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	itoa[size--] = '\0';
	while (size >= 0)
	{
		itoa[size] = num % 10 + 48;
		num = num / 10;
		size--;
	}
	if (n < 0)
		itoa[0] = '-';
	return (itoa);
}
