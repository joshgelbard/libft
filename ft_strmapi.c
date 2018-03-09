/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:05:16 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/08 13:38:42 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <string.h>

char	*ft_strmapi(char const *s,
		char (*f)(unsigned int, char))
{
	char	*t;
	size_t	i;

	i = 0;
	t = ft_strdup(s);
	if (t)
		while (*s)
		{
			t[i] = f(i, *s);
			++s;
			++i;
		}
	return (t);
}
