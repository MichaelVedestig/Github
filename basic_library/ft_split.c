/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 02:21:52 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/19 15:12:20 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nr_of_str(const char *s, char c)
{
	unsigned int	i;
	size_t			strings;

	i = 0;
	strings = 1;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			strings++;
		while (s[i] != c && s[i])
			i++;
	}
	return (strings + 1);
}

static int	ft_incr_c(char const *s, int i, char c)
{
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_incr_w(char const *s, int i, char c)
{
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	arr;
	size_t	start;
	char	**table;

	i = 0;
	arr = 0;
	if (s == NULL)
		return (NULL);
	table = ft_calloc(ft_nr_of_str(s, c), sizeof(char *));
	if (table == NULL)
		return (NULL);
	while (s[i])
	{
		i = ft_incr_c(s, i, c);
		start = i;
		i = ft_incr_w(s, i, c);
		if (s[i - 1] != c)
		{	
			table[arr] = ft_substr(s, start, i - start);
			arr++;
		}
	}
	return (table);
}
