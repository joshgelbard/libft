/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 21:33:15 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:40:44 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*t;

	if (!s1 || !s2)
		return (NULL);
	t = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!t)
		return (NULL);
	ft_strcat(t, (char *)s1);
	ft_strcat(t, (char *)s2);
	return (t);
}
