/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 00:41:22 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/19 07:40:00 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_increment(const char *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && ft_check(set, s1[i]) == 1)
		i++;
	return (i);
}

static int	ft_decrement(const char *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ft_check(set, s1[i]) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		beginning;
	int		end;
	int		i;

	beginning = 0;
	i = 0;
	if (!s1)
		return (NULL);
	beginning = ft_increment(s1, set);
	if (s1[beginning] == '\0')
		return ("\0");
	end = ft_decrement(s1, set);
	str = (char *)malloc(sizeof(char) * (end - beginning) + 2);
	if (str == NULL)
		return (NULL);
	while (i < end - beginning + 1)
	{
		str[i] = s1[beginning + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
