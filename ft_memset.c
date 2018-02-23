/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:49:39 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 15:49:50 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memset.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bytes;
	size_t			i;

	bytes = (unsigned char *)b;
	c = (unsigned char)c;
	i = 0;
	while (i < len)
		bytes[i++] = c;
	return (b);
}
