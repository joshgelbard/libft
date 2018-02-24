/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:09:22 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 17:32:21 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memccpy.h"
#include "ft_memcpy.h"
#include "ft_memchr.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cc;

	cc = (unsigned char *)ft_memchr(src, c, n);
	if (cc)
		n = cc - (unsigned char *)src + 1;
	ft_memcpy(dst, src, n);
	return (cc ? dst + n : NULL);
}
