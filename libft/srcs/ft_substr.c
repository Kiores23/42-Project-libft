/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:21:38 by amery             #+#    #+#             */
/*   Updated: 2022/11/16 16:36:37 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	l;

	if (!s)
		return (0);
	l = ft_strlen((char *)s);
	if (start >= l)
		return (ft_strdup(""));
	l = l - start + 1;
	if (l > len + 1)
		l = len + 1;
	s2 = malloc(sizeof(char) * l);
	if (!s2)
		return (s2);
	ft_strlcpy(s2, (char *)s + start, l);
	return (s2);
}
