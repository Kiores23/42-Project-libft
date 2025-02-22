/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amery <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:54:01 by amery             #+#    #+#             */
/*   Updated: 2022/11/08 10:43:21 by amery            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include"stdio.h"

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(char *)(s++) = 0;
}
