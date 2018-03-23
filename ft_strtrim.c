/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 21:40:25 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/23 13:56:42 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_ext.h"
#include "ft_string.h"
#include "ft_ctype.h"
#include <string.h>

char	*ft_strtrim(char const *s)
{
	size_t	i;

	if (!s)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	i = ft_strlen(s) - 1;
	while (ft_isspace(s[i]))
		--i;
	return (ft_strsub(s, 0, i + 1));
}
