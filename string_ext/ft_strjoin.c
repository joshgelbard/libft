/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 21:33:15 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/01 21:39:14 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_ext.h"
#include "ft_string.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;

	t = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (t)
	{
		ft_strcat(t, (char *)s1);
		ft_strcat(t, (char *)s2);
	}
	return (t);
}
