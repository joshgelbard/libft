/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:05:07 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/08 13:37:02 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_ext.h"
#include "ft_string.h"
#include <string.h>
#define UNSIGNED_POSITIVE(n) (unsigned int)( n < 0 ? n * -1 : n )

static size_t	itoa_get_len(int n)
{
	size_t	cc;

	cc = (n < 0) + 1;
	while (UNSIGNED_POSITIVE(n) > 9)
	{
		++cc;
		n /= 10;
	}
	return (cc);
}

char			*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	len = itoa_get_len(n);
	s = ft_strnew(len);
	if (!s)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	while (UNSIGNED_POSITIVE(n) > 9)
	{
		s[--len] = '0' + UNSIGNED_POSITIVE(n) % 10;
		n /= 10;
	}
	s[--len] = '0' + UNSIGNED_POSITIVE(n);
	return (s);
}
