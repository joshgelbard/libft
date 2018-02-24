/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:54:22 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/24 01:11:30 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strtol.h"

int	ft_atoi(const char *str)
{
	return ((int)ft_strtol(str, (char **)NULL, 10));
}