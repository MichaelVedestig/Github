/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:00:17 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/17 08:47:40 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	p_dest = (unsigned char *) dest;
	p_src = (unsigned char *) src;
	while (i < n)
	{
		((char *)p_dest)[i] = ((char *)p_src)[i];
		i++;
	}
	return (dest);
}
