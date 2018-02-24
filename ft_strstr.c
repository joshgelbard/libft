/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:19:45 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 22:51:19 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strstr.h"
#include <string.h>

static char	*recurse(const char *haystack, const char *needle, size_t matched)
{
	if (!*needle)
		return ((char *)(haystack - matched));
	if (!*haystack)
		return (NULL);
	if (*needle == *haystack)
		return (recurse(haystack + 1, needle + 1, matched + 1));
	return (recurse(haystack + 1, needle - matched, 0));
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	return (recurse(haystack, needle, 0));
}
