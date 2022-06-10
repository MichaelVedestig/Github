/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 16:21:30 by mvedesti          #+#    #+#             */
/*   Updated: 2021/12/02 12:19:34 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_attach_sign(short int flags, char *str, long long num)
{
	if (num >= 0)
	{
		if (flags & PLUS_SIGN)
		{
			str = ft_strjoin(ft_strdup("+"), str);
		}
		else if (flags & INVIS_PLUS)
		{
			str = ft_strjoin(ft_strdup(" "), str);
		}
	}
	if (num < 0)
	{
		str = ft_strjoin(ft_strdup("-"), str);
	}
	return (str);
}

void	ft_print_int(short int flags, t_list *info)
{
	char		*str;
	long long	num;
	int			len;

	num = (long long)va_arg(info->ap, int);
	str = ft_itoa(num);
	len = ft_strlen(str);
	if (info->min_width == 0)
		info->min_width = info->max_width;
	if (num < 0 || flags & INVIS_PLUS || flags & PLUS_SIGN)
		info->min_width--;
	while ((info->precision == 1 && len++ < info->max_width) \
	|| (flags & ZERO_PAD && len++ < info->min_width))
		str = ft_strjoin(ft_strdup("0"), str);
	str = ft_attach_sign(flags, str, num);
	if (flags & LEFT_JUSTIFY)
		info->character_count += ft_putstr(str);
	while (len < info->min_width--)
		info->character_count += write(1, " ", 1);
	if ((flags & LEFT_JUSTIFY) == 0)
		info->character_count += ft_putstr(str);
	free(str);
}

void	ft_print_unsigned_int(short int flags, t_list *info)
{
	char			*str;
	unsigned int	num;
	int				len;

	num = va_arg(info->ap, unsigned int);
	str = ft_uitoa(num);
	len = ft_strlen(str);
	while (info->precision == 1 && len < info->max_width)
	{	
		str = ft_strjoin(ft_strdup("0"), str);
		len++;
	}
	str = ft_attach_sign(flags, str, num);
	if (flags & LEFT_JUSTIFY)
		info->character_count += ft_putstr(str);
	while (ft_strlen(str) < info->min_width)
		ft_pad(info, flags);
	if ((flags & LEFT_JUSTIFY) == 0)
		info->character_count += ft_putstr(str);
	free(str);
}
