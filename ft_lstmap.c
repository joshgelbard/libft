/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 22:58:15 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/08 13:43:24 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <string.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *dummy;
	t_list *curr;
	t_list *res;

	dummy = ft_lstnew(NULL, 0);
	curr = dummy;
	while (lst)
	{
		res = f(lst);
		curr->next = ft_lstnew(res->content, res->content_size);
		curr = curr->next;
		lst = lst->next;
	}
	curr = dummy->next;
	free(dummy);
	return (curr);
}
