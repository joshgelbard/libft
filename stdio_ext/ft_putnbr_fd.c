/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:51:30 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/05 18:06:25 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string_ext.h"
#define UNSIGNED_POSITIVE(n) (unsigned int)( n < 0 ? n * -1 : n )

static size_t	num_digits(int n)
{
	size_t	cc;

	cc = 1;
	while (UNSIGNED_POSITIVE(n) > 9)
	{
		++cc;
		n /= 10;
	}
	return (cc);
}

void	ft_putnbr_fd(int n, int fd)
{
	size_t			digits;
	unsigned int	div;

	digits = num_digits(n);
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
