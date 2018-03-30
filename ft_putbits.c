/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 19:42:56 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/29 19:43:31 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putbits(unsigned int n)
{
	unsigned int	mask;

	mask = 1 << (sizeof(mask) * 8 - 1);
	while (mask)
	{
		ft_putchar('0' + !!(n & mask));
		mask = mask >> 1;
	}
	ft_putchar('\n');
}
