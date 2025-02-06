/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:24:22 by amery             #+#    #+#             */
/*   Updated: 2022/11/16 17:43:31 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*t;

	if (!lst || !del)
		return ;
	t = (*lst)->next;
	while (t->next)
	{
		ft_lstdelone(t, del);
		t = t->next;
	}
	ft_lstdelone(t, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
