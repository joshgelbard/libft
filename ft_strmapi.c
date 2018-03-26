/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 20:05:16 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 13:50:40 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
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
