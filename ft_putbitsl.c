/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbitsl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:49:23 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/29 19:43:18 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbitsl(unsigned long n)
{
	unsigned long	mask;

	mask = 1lu << (sizeof(mask) * 8 - 1);
	while (mask)
	{
		ft_putchar('0' + !!(n & mask));
		mask = mask >> 1;
	}
	ft_putchar('\n');
}
