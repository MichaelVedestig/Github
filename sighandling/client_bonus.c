/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:48:56 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 10:43:46 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/header_files/libft.h"
#include "libft/header_files/ft_printf.h"

int	g_answers;

static void	sig_handler(int signum)
{
	if (signum == 10)
		g_answers += 1;
}

static int	char_to_bin(int c, int pid)
{
	int			i;
	static int	count;

	i = 0;
	while (i++ < 8)
	{
		count += 1;
		if (c & 0b10000000)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		while (count != g_answers)
			pause();
		c <<= 1;
	}
	return (i - 1);
}

int	main(int argc, char **argv)
{
	struct sigaction	sa;
	int					pid;
	int					i;
	int					count;

	i = 0;
	if (argc != 3 || ft_strlen(argv[2]) < 1)
		return (1);
	pid = ft_atoi(argv[1]);
	sa.sa_handler = &sig_handler;
	sa.sa_flags = 0;
	sigaction(SIGUSR1, &sa, NULL);
	while (argv[2][i])
	{
		count += char_to_bin(argv[2][i], pid);
		i++;
	}
	ft_printf("\n%d signals sent, %d aknowledged by server\n", count, g_answers);
	return (0);
}
