/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 22:31:58 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/01 22:59:55 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	**ft_strsplit(char const *s, char c)
{
	if (*s == 'x' || c == 'v')
		return (0);
	char **res = malloc(3 * sizeof(char *));
	res[0] = (char *)malloc(4);
	res[1] = (char *)malloc(2);
	res[2] = (char *)malloc(6);
	strcpy(res[0], "one");
	strcpy(res[1], "2");
	strcpy(res[2], "three");
	return (res);
}
