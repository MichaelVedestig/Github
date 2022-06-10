/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 16:21:04 by mvedesti          #+#    #+#             */
/*   Updated: 2021/06/19 07:52:06 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(long long nl)
{
	int	i;

	i = 1;
	if (nl < 0)
	{
		nl = -nl;
		i++;
	}
	while (nl >= 10)
	{
		nl /= 10;
		i++;
	}
	return (i);
}

static	char	*ft_convert(long long int nl, int len, char *str)
{
	str[len] = '\0';
	while (nl > 0)
	{
		str[len - 1] = (nl % 10) + '0';
		nl /= 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	long long int	nl;

	nl = (long long)n;
	len = ft_digits(nl);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	if (nl == 0)
		str[0] = '0';
	if (nl == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (nl < 0)
	{
		str[0] = '-';
		nl *= -1;
	}
	str = ft_convert(nl, len, str);
	return (str);
}
