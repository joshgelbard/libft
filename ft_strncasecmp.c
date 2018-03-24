/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/23 16:30:00 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/23 16:58:19 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_ctype.h"

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n &&
			(unsigned char)ft_tolower(*s1) == (unsigned char)ft_tolower(*s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (n == 0 ? 0 :
			(unsigned char)ft_tolower(*s1) - (unsigned char)ft_tolower(*s2));
}
