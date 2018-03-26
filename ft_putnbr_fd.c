/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:51:30 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/26 12:39:49 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define UNSIGNED_POSITIVE(n) (unsigned int)( n < 0 ? n * -1 : n )

void			ft_putnbr_fd(int n, int fd)
{
	size_t			digits;
	unsigned int	div;

	digits = ft_numlen(n);
	div = 1;
	while (--digits)
		div *= 10;
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (div)
	{
		ft_putchar_fd('0' + UNSIGNED_POSITIVE(n) / div % 10, fd);
		div /= 10;
	}
}
