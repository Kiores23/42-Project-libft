/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:19:15 by amery             #+#    #+#             */
/*   Updated: 2022/11/10 12:30:25 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;

	dest = (char *)dst;
	if (!dst && !src)
		return (0);
	while (n-- > 0)
		*(char *)(dest++) = *(char *)(src++);
	return (dst);
}
