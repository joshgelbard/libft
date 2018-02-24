/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:05:50 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 22:57:01 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRNSTR_H
# define FT_STRNSTR_H
# include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
#endif
