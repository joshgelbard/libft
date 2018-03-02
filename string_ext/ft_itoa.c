/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:05:07 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/02 15:33:53 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_ext.h"
#include "ft_string.h"
#include <string.h>

static char	*itoa_str_init(unsigned int un, int wasnegative)
{
	size_t	cc;
	char	*s;

	cc = 1 + wasnegative;
	while (un > 9)
	{
		++cc;
		un /= 10;
	}
	s = ft_strnew(cc);
	if (s)
		while(cc)
			s[--cc] = '0';
	return (s);
}

static void	itoa_str_fill_pos(char *s, unsigned int un)
{
	size_t	i;

	i = ft_strlen(s) - 1;
	while (i)
	{
		s[i] += un % 10;
		un /= 10;
		--i;
	}
	s[i] += un;
}

char	*ft_itoa(int n)
{
	char			*s;
	int				neg;

	neg = (n < 0);
	s = itoa_str_init((unsigned int)(neg ? -n : n), neg);
	if (!s)
		return (NULL);
	itoa_str_fill_pos(s + neg, (unsigned int)(neg ? -n : n));
	if (neg)
		s[0] = '-';
	return (s);
}
