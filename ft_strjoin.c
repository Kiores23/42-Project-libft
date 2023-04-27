/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:42:23 by amery             #+#    #+#             */
/*   Updated: 2022/11/12 17:40:36 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	size_s1;
	size_t	size_s2;

	if (!s1 || !s2)
		return (ft_strdup(""));
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	s3 = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!s3)
		return (0);
	ft_memmove(s3, s1, size_s1);
	ft_memmove(s3 + size_s1, s2, size_s2);
	s3[size_s1 + size_s2] = '\0';
	return (s3);
}
