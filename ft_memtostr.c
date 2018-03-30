/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memtostr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 18:46:06 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/29 19:51:42 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memtostr(void *p, size_t len)
{
	char			*s;
	size_t			i;
	unsigned char	b;

	if (!(s = malloc(len * 2 + 1)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		b = BYTE_AT(p + i);
		if ((0xf & b) > 9)
			s[i * 2 + 1] = 'a' + (0xf & b) - 10;
		else
			s[i * 2 + 1] = '0' + (0xf & b);
		b = b >> 4;
		if ((0xf & b) > 9)
			s[i * 2] = 'a' + (0xf & b) - 10;
		else
			s[i * 2] = '0' + (0xf & b);
		++i;
	}
	s[i * 2] = '\0';
	return (s);
}
