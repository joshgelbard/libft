/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:05:16 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/01 20:38:32 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <string.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*t;
	size_t	i;

	i = 0;
	t = ft_strdup(s);
	if (t)
		while (*s)
		{
			t[i++] = f(*s);
			++s;
		}
	return (t);
}
