/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:25:51 by amery             #+#    #+#             */
/*   Updated: 2022/11/15 19:39:08 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_nbrlen(int n)
{
	if (n <= -10 || 10 <= n)
		return (1 + ft_nbrlen(n / 10));
	return (1);
}

char	*ft_charitoa(int n, char *a, size_t size_a, size_t s)
{
	int		d;
	size_t	i;

	if (s)
	{
		a[0] = '-';
		n *= -1;
	}
	a[size_a + s] = '\0';
	d = 1;
	i = -1;
	while (++i < size_a - 1)
		d *= 10;
	i = -1;
	while (++i < size_a)
	{
		a[i + s] = (n / d) + '0';
		n %= d;
		d /= 10;
	}
	return (a);
}

char	*ft_itoa(int n)
{
	char	*a;
	size_t	size_a;
	size_t	s;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = 0;
	if (n < 0)
		s = 1;
	size_a = ft_nbrlen(n);
	a = malloc(sizeof(char) * (size_a + s + 1));
	if (!a)
		return (ft_strdup(""));
	return (ft_charitoa(n, a, size_a, s));
}
