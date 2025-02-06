/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:21:53 by amery             #+#    #+#             */
/*   Updated: 2022/11/17 13:07:17 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstcpy(t_list **dst, t_list *src)
{
	t_list	*t1;
	t_list	*t2;

	*dst = ft_lstnew(src->content);
	if (!*dst)
		return (0);
	t1 = *dst;
	t2 = *dst;
	while (src->next)
	{
		src = src->next;
		t2 = ft_lstnew(src->content);
		if (!t2)
			return (0);
		t1->next = t2;
		t1 = t1->next;
	}
	t1->next = NULL;
	return (1);
}

void	ft_lstitermap(t_list *lst, void *(*f)(void *))
{
	t_list	*t;

	if (!lst || !f)
		return ;
	t = lst;
	while (t->next)
	{
		t->content = f(t->content);
		t = t->next;
	}
	t->content = f(t->content);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	int		t;

	if (!lst || !f || !del)
		return (ft_lstnew(0));
	t = ft_lstcpy(&lst2, lst);
	if (t == 0)
	{
		ft_lstclear(&lst2, del);
		return (ft_lstnew(0));
	}
	ft_lstitermap(lst2, f);
	return (lst2);
}
