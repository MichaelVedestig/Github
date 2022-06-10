/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 22:19:56 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/18 09:21:46 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int n, size_t len)
{
	char	*p;

	p = (char *)str;
	while (len-- > 0)
	{
		*p++ = n;
	}
	return (str);
}
