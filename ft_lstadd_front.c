/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:12:22 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 01:00:22 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	t_list *l;

	if (*alst)
	{
		l = ft_lstlast(*alst);
		l->next = new;
	}
	else
		*alst = new;
}
