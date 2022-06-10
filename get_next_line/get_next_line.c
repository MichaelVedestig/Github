/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/19 10:53:33 by mvedesti          #+#    #+#             */
/*   Updated: 2022/03/31 20:54:07 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#define BUFFER_SIZE 1020

static char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

static char	*detach_line(char **save, char **line, int fd)
{
	char	*temp;
	int		i;

	i = 0;
	if (!save[fd])
	{
		*line = ft_strdup("");
		return (save[fd]);
	}
	while (save[fd][i] != '\0' && save[fd][i] != '\n')
		i++;
	*line = ft_substr(save[fd], 0, i);
	if (save[fd][i] != '\0')
	{
		temp = ft_substr(save[fd], i + 1, ft_strlen(save[fd]) - i);
		free(save[fd]);
		save[fd] = ft_strdup(temp);
		free(temp);
	}
	else
	{
		free(save[fd]);
		save[fd] = NULL;
	}
	return (save[fd]);
}

static char	*store_buf(char **save, char *buf, int fd)
{
	char	*temp;

	temp = ft_strjoin(save[fd], buf);
	free(save[fd]);
	save[fd] = ft_strdup(temp);
	free(temp);
	return (save[fd]);
}

int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	static char	*save[10000];
	int			read_value;

	if (fd < 0 || !line || BUFFER_SIZE < 1)
		return (-1);
	read_value = read(fd, buf, BUFFER_SIZE);
	while (read_value > 0)
	{
		buf[read_value] = '\0';
		save[fd] = store_buf(save, buf, fd);
		if (ft_strchr(buf, '\n') != NULL)
			break ;
		read_value = read(fd, buf, BUFFER_SIZE);
	}
	if (read_value == -1)
		return (-1);
	save[fd] = detach_line(save, line, fd);
	if (!save[fd])
		return (0);
	return (1);
}
