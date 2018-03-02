/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 22:31:58 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/02 13:53:47 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_ext.h"
#include "ft_string.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

static int	word_count(char const *s, char delim)
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

static size_t	next_word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] == c) == (*s == c))
		i++;
	return (i);
}

char	**ft_strsplit(char const *s, char c)
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
	ary[i] = ft_strnew(0);
	return (ary);
}
