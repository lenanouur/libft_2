/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:13:21 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:13:28 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*mem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		mem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mem;
	}
	*lst = NULL;
}
