/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvedesti <mvedesti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:49:02 by mvedesti          #+#    #+#             */
/*   Updated: 2022/02/24 10:41:16 by mvedesti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/header_files/libft.h"
#include "libft/header_files/ft_printf.h"

static void	sig_handler(int signum, siginfo_t *info, void *oldact)
{
	static int		i = 0;
	static char		c = 0;

	(void)oldact;
	if (i++ < 8)
	{
		if (signum == 10)
			c += 1;
		if (i < 8)
			c <<= 1;
		else
		{
			write(1, &c, 1);
			i = 0;
			c = 0;
		}
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("PID: %d\n", getpid());
	sa.sa_sigaction = &sig_handler;
	sa.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}
