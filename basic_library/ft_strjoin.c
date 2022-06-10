/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:12:03 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/19 07:43:58 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(char *str, char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	while (i < s1len)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (s2len + s1len))
	{
		str[i] = s2[y];
		y++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (str == NULL)
		return (NULL);
	str = ft_join(str, s1, s2);
	return (str);
}
