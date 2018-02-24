/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:11:43 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 16:57:58 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memchr.h"
#include "ft_memcmp.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	int		d;

	i = 0;
	while (i < n)
	{
		if (ft_memcmp(s + i, &c, 1) == 0)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
