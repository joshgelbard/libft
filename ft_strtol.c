/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:03:18 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/08 13:39:42 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include "ft_ctype.h"

#ifndef LONG_MAX
# define LONG_MAX	9223372036854775807L
# define LONG_MIN	(-LONG_MAX - 1L)
#endif

static int	get_base(const char *str, int base)
{
	if (base == 1 || base <= -1 || base > 36)
		return (0);
	else if (base == 0 && ft_strncmp(str, "0x", 2) == 0)
		return (16);
	else if (base == 0 && *str == '0')
		return (8);
	else if (base == 0)
		return (10);
	else
		return (base);
}

static void	handle_prefix(const char **str_p, int *base_p, int *neg_flag)
{
	char	*str;
	int		base;

	str = (char *)*str_p;
	*neg_flag = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		*neg_flag = (*str++ == '-');
	base = get_base(str, *base_p);
	if (base == 16 && !ft_strncmp(str, "0x", 2) && ft_ctoi(str[2], 16) != -1)
		str += 2;
	*base_p = (ft_ctoi(*str, base) == -1) ? 0 : base;
	*str_p = str;
}

static long	clamp_to_bounds(unsigned long res, int isnegative)
{
	if (res > (unsigned long)LONG_MAX + isnegative)
		return (isnegative ? LONG_MIN : LONG_MAX);
	return (isnegative ? (long)(res * -1) : (long)res);
}

long		ft_strtol(const char *str, char **endptr, int base)
{
	unsigned long	place;
	unsigned long	res;
	unsigned long	tmp;
	char			*end;
	int				isnegative;

	end = (char *)str;
	handle_prefix(&str, &base, &isnegative);
	if (base > 0)
		end += (str - end);
	while (*end && ft_ctoi(*end, base) != -1)
		end += 1;
	if (endptr && *endptr)
		*endptr = end;
	tmp = 0;
	res = tmp;
	place = 1;
	while (--end >= str)
	{
		if ((tmp += ft_ctoi(*end, base) * place) < res || place < res)
			return (isnegative ? LONG_MIN : LONG_MAX);
		place *= base;
		res = tmp;
	}
	return (clamp_to_bounds(res, isnegative));
}
