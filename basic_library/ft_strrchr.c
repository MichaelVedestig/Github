/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 03:22:06 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/05 14:50:21 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str)
	{
		if (*str == c)
			p = (char *)str;
		str++;
	}
	if (c == '\0')
		p = (char *)str;
	return (p);
}
