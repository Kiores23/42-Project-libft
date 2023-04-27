/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:54:23 by amery             #+#    #+#             */
/*   Updated: 2022/11/15 11:30:23 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_trimlen(const char *s1, const char *set, size_t *size_s2, size_t *l);

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	size_s2;
	size_t	l;
	size_t	i;

	if (!s1)
		return (ft_strdup(""));
	l = 0;
	ft_trimlen(s1, set, &size_s2, &l);
	if (!size_s2)
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * (size_s2 + 1));
	if (!s2)
		return (ft_strdup(""));
	i = 0;
	ft_strlcpy(s2, &s1[l], size_s2 + 1);
	return (s2);
}

void	ft_trimlen(const char *s1, const char *set, size_t *size_s2, size_t *l)
{
	size_t	i;
	size_t	y;
	size_t	size_set;

	i = -1;
	size_set = ft_strlen(set);
	while (s1[++i])
	{
		y = -1;
		while (i == *l && ++y < size_set)
		{
			if (s1[i] == set[y])
				*l = *l + 1;
		}
	}
	*size_s2 = ft_strlen(s1 + *l);
	while (s1[--i] && i == *size_s2 + *l - 1 && &s1[i] != &s1[*l])
	{
		y = -1;
		while (i == *size_s2 + *l - 1 && ++y < size_set)
		{
			if (s1[i] == set[y] && *size_s2 > 0)
				*size_s2 = *size_s2 - 1;
		}
	}
}
