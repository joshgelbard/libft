/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:06:30 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/05 14:09:05 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	main(void)
{
	char *msg = "putchar ok\n";
	while (*msg)
		ft_putchar(*msg++); // ...
	return(0);
}
