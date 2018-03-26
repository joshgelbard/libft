/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:24:18 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:40:24 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n;
	char	*s2;

	n = ft_strlen(s1);
	s2 = malloc(n + 1);
	if (n > 0 && s2 == NULL)
		return (NULL);
	return (ft_strcpy(s2, s1));
}
