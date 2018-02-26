/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:27:54 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/25 00:16:19 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static char	*recurse(const char *haystack, const char *needle,
		size_t len, size_t matched)
{
	if (!*needle)
		return ((char *)(haystack - matched));
	if (!*haystack || len == 0)
		return (NULL);
	if (*needle == *haystack)
		return (recurse(haystack + 1, needle + 1, len - 1, matched + 1));
	return (recurse(haystack + 1, needle - matched, len - 1, 0));
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	return (recurse(haystack, needle, len, 0));
}
