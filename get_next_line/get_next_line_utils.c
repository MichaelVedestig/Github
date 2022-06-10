/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 12:03:26 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/28 13:13:04 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == (NULL))
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

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
	str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (str == NULL)
		return (NULL);
	str = ft_join(str, s1, s2);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == (NULL))
		return (NULL);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
