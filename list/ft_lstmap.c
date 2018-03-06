/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgelbard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 22:58:15 by jgelbard          #+#    #+#             */
/*   Updated: 2018/03/06 13:31:55 by jgelbard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *dummy = ft_lstnew(NULL, 0);
	t_list *curr;
	t_list *res;

	curr = dummy;
	while (lst)
	{
		res = f(lst);
		curr->next = ft_lstnew(res->content, res->content_size);
		curr = curr->next;
		lst = lst->next;
	}
	curr = dummy->next;
	ft_lstdelone(&dummy);
	return (curr);
}
