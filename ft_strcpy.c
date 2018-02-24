/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:43:34 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/24 01:21:00 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strcpy.h"
#include <string.h>

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while ((dst[i] = src[i]))
		i++;
	return (dst);
}
