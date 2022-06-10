/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 06:49:05 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/20 07:50:42 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*p;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	p = (t_list *)malloc(sizeof(t_list));
	new = p;
	while (lst)
	{
		p->next = (t_list *)malloc(sizeof(t_list));
		p->content = f(lst->content);
		temp = p;
		p = p->next;
		lst = lst->next;
	}
	del(p);
	free(p);
	temp->next = NULL;
	return (new);
}
