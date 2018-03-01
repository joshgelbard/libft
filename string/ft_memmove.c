/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 14:07:39 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/28 21:28:43 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

static	void ft_backwards_memcpy(void *dst, const void *src, size_t n)
{
	while (n != 0)
	{
		*(unsigned char *)(dst + n - 1) = *(unsigned char *)(src + n - 1);
		--n;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
		ft_backwards_memcpy(dst, src, len);
	else if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
