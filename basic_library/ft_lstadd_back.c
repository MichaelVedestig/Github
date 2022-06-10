/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:13:16 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/14 11:14:50 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**curr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	curr = lst;
	while (*curr)
		curr = &(*curr)->next;
	new->next = *curr;
	*curr = new;
}
