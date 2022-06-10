/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 20:20:15 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/05 00:09:03 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(const void *dest, const void *src, int c, size_t n)
{
	unsigned char	*localdest;
	unsigned char	*localsrc;
	size_t			i;

	localdest = (unsigned char *)dest;
	localsrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		localdest[i] = localsrc[i];
		if (localdest[i] == (unsigned char)c)
			return (&localdest[i + 1]);
		i++;
	}
	return (NULL);
}
