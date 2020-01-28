/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenalabi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 00:13:48 by lenalabi          #+#    #+#             */
/*   Updated: 2019/12/02 00:13:57 by lenalabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*b;

	if (!lst || !*f || !del)
		return (NULL);
	b = NULL;
	while (lst)
	{
		if (!(n = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&b, del);
			return (NULL);
		}
		ft_lstadd_back(&b, n);
		lst = lst->next;
	}
	return (b);
}
