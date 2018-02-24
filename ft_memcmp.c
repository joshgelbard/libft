/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:30:57 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/24 00:51:46 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memcmp.h"
#define BYTE_AT *(unsigned char *)

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- && BYTE_AT(s1++) == BYTE_AT(s2++))
		;
	return (BYTE_AT(--s1) - BYTE_AT(--s2));
}
