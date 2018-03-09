/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:43:22 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/01 13:48:10 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (n == 0 ? 0 : (unsigned char)*s1 - (unsigned char)*s2);
}
