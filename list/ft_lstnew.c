/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:31:30 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/06 15:04:26 by jgelbard         ###   ########.fr       */
/*                                                                           */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_string.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;


	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;
	if (content)
	{
		node->content = malloc(content_size);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	else
	{
		node->content = NULL;
		node->content_size = 0;
	}
	return (node);
}
