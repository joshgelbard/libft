/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:30:33 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/20 14:06:18 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMCCPY_H
# define FT_MEMCCPY_H
# include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
#endif
