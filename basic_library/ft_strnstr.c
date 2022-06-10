/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:46:48 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/16 20:23:37 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	int		i;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	l = ft_strlen(little);
	while (big[i] && len >= l)
	{
		if (ft_strncmp(big + i, little, l) == 0)
			return ((char *)big + i);
		i++;
		len--;
	}
	return (NULL);
}
