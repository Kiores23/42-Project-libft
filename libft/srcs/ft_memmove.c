/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:41:44 by amery             #+#    #+#             */
/*   Updated: 2022/11/10 12:39:27 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (!src && !dst)
		return (0);
	if (src2 < dst2)
	{
		i = len;
		while (i-- > 0)
			dst2[i] = src2[i];
	}
	else
	{
		i = 0;
		while (i++ < len)
			dst2[i - 1] = src2[i - 1];
	}
	return (dst2);
}
