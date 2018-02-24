/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:22:49 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 15:27:50 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tolower.h"
#include "ft_isupper.h"

int	ft_tolower(int c)
{
	return (ft_isupper(c) ? c - 'A' + 'a' : c);
}