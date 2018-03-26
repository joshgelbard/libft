/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:09:22 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:39:16 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*cc;

	cc = (unsigned char *)ft_memchr(src, c, n);
	if (cc)
		n = cc - (unsigned char *)src + 1;
	ft_memcpy(dst, src, n);
	return (cc ? dst + n : NULL);
}
