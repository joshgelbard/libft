/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 22:31:58 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 13:50:40 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_count(const char *s, char delim)
{
	int	wc;
	int	in_word;

	wc = 0;
	in_word = 0;
	while (*s)
	{
		if (in_word && *s == delim)
			in_word = 0;
		else if (!in_word && *s != delim)
		{
			++wc;
			in_word = 1;
		}
		++s;
	}
	return (wc);
}

static size_t	next_word_size(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] == c) == (*s == c))
		i++;
	return (i);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**ary;
	int		wc;
	size_t	ws;
	int		i;

	if (!s)
		return (NULL);
	wc = word_count(s, c);
	ary = (char **)malloc(wc * sizeof(char *) + 1);
	if (!ary)
		return (NULL);
	i = 0;
	while (i < wc)
	{
		ws = next_word_size(s, c);
		if (*s != c)
			ary[i++] = ft_strsub(s, 0, ws);
		s += ws;
	}
	ary[i] = NULL;
	return (ary);
}
