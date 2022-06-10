/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:39:38 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:34:13 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header_files/ft_printf.h"
#include "./header_files/libft.h"

void	ft_bzero(char *str, size_t n)
{
	char	*c;
	size_t	i;

	c = str;
	i = 0;
	while (i < n)
	{
		c[i] = '\0';
		i++;
	}
}
