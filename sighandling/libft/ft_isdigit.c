/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:39:17 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:34:48 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header_files/ft_printf.h"
#include "./header_files/libft.h"

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
