/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:05:07 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:37:58 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define UNSIGNED_POSITIVE(n) (unsigned int)( n < 0 ? n * -1 : n )

char		*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	len = ft_numlen(n) + (n < 0);
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
