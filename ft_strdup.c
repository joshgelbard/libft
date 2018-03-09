/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:24:18 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/25 00:23:20 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		n;
	char	*s2;

	n = ft_strlen(s1);
	s2 = malloc(n + 1);
	if (n > 0 && s2 == NULL)
	{
		free(s2);
		return (NULL);
	}
	return (ft_strcpy(s2, s1));
}
