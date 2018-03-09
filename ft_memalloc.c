/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 16:24:34 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/01 16:38:48 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_string.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	p = malloc(size);
	if (p)
		ft_bzero(p, size);
	return (p);
}
