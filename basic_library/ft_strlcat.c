/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 16:47:33 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/05 21:06:39 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dst);
	i = 0;
	while (((i + d_len + 1) < size) && src[i] != '\0')
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len < size)
		dst[d_len + i] = '\0';
	if (d_len > size)
		return (s_len + size);
	return (s_len + d_len);
}
