/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 14:10:51 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:37:17 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ctoi(int c, int base)
{
	if (base < 2 || base > 36)
		return (-1);
	if (ft_isdigit(c))
		c -= '0';
	else if (ft_isupper(c))
		c = c - 'A' + 10;
	else if (ft_islower(c))
		c = c - 'a' + 10;
	else
		return (-1);
	return (c < base ? c : -1);
}
