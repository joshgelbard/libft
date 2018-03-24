/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 21:50:48 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/23 18:39:33 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H
# include <string.h>

int		ft_atoi(const char *str);
int		ft_ctoi(int c, int base);
long	ft_strtol(const char *str, char **endptr, int base);
size_t	ft_numlen(int n);

#endif
