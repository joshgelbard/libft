/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 21:27:54 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/08 13:42:21 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static char	*recurse(const char *haystack, const char *needle,
		size_t len, size_t matched)
{
	if (len == 0)
		return (NULL);
	if (!*needle || (len == 1 && *needle == *haystack && needle[1] == '\0'))
		return ((char *)(haystack - matched));
	if (!*haystack)
		return (NULL);
	if (*needle == *haystack)
		return (recurse(haystack + 1, needle + 1, len - 1, matched + 1));
	return (recurse(haystack - matched + 1,
				needle - matched, len + matched - 1, 0));
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	return (len == 0 ? NULL : recurse(haystack, needle, len, 0));
}
