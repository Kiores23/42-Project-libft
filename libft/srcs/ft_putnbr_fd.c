/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:16:50 by amery             #+#    #+#             */
/*   Updated: 2022/11/15 19:48:45 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_nbrlen2(int n)
{
	if (n <= -10 || 10 <= n)
		return (1 + ft_nbrlen2(n / 10));
	return (1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	n2;
	size_t	size_n;
	size_t	d;

	n2 = n;
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
		n2 *= -1;
	}
	size_n = ft_nbrlen2(n2);
	d = 1;
	while (--size_n > 0)
		d *= 10;
	size_n = ft_nbrlen2(n2);
	while (size_n-- > 0)
	{
		ft_putchar_fd((n2 / d) + '0', fd);
		n2 %= d;
		d /= 10;
	}
}
