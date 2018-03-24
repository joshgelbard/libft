/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:05:16 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/23 19:02:11 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*t;
	size_t	i;

	if (!s || !f)
		return (NULL);
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
