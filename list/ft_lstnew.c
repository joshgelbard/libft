/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:31:30 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/05 22:52:49 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;
	node->content = content;
	node->content_size = content ? content_size : 0;
	return (&node);
}
