/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:35:36 by amery             #+#    #+#             */
/*   Updated: 2022/11/17 13:28:01 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s;
	size_t	l;

	if ((!src || !dest) && !size)
		return (0);
	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (!j)
		return (i);
	else if (size <= i)
		return (j + size);
	s = 0;
	while (dest[s])
		s++;
	l = 0;
	while (s < size - 1 && src[l])
		dest[s++] = src[l++];
	dest[s] = '\0';
	return (i + j);
}
