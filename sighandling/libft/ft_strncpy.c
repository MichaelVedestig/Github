/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:54:30 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:36:11 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_files/ft_printf.h"
#include "header_files/libft.h"

char	*ft_strncpy(char *dest, const char *src, int n)
{
	size_t	i;

	i = 0;
	while (src[i] && n > 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
