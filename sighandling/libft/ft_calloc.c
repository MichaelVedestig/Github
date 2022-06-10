/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 08:52:40 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 05:34:35 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./header_files/ft_printf.h"
#include "./header_files/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nmemb * size);
	return (p);
}
