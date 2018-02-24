/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:22:49 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/23 15:25:27 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_toupper.h"
#include "ft_islower.h"

int	ft_toupper(int c)
{
	return (ft_islower(c) ? c - 'a' + 'A' : c);
}
