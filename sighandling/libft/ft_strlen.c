/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:03:22 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:36:04 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header_files/ft_printf.h"
#include "header_files/libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
