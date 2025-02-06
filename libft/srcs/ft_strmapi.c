/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:40:09 by amery             #+#    #+#             */
/*   Updated: 2022/11/15 17:55:35 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*r;
	size_t			size_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	size_s = ft_strlen(s);
	r = malloc(sizeof(char) * (size_s + 1));
	if (!r)
		return (ft_strdup(""));
	ft_strlcpy(r, s, size_s + 1);
	while (r[i])
	{
		r[i] = (*f)(i, r[i]);
		i++;
	}
	return (r);
}
