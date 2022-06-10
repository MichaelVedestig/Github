/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 20:52:28 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/17 08:49:35 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*intermediate;

	current = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (current != NULL)
	{
		intermediate = current->next;
		del(current->content);
		free(current);
		current = intermediate;
	}
	*lst = NULL;
}
