/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:39:26 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:34:40 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header_files/ft_printf.h"
#include "./header_files/libft.h"

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
