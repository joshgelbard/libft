/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 01:25:53 by jgelbard          #+#    #+#             */
/*   Updated: 2018/02/24 01:26:44 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_isalpha.h"
#include "ft_isupper.h"
#include "ft_islower.h"

int	ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
