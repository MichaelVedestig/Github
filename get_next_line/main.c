#include <stdio.h>
#include <stdlib.h>
#include "get_next_line.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int y = 0;
	int fd;
	char *line;

	line = argv[1];
	fd = open(line, O_RDONLY);
	printf("%d", fd);
	while (get_next_line(fd, argv) == 1)
	{
		y += 1;
		printf("%d", y);
	}

	printf("the map has %d lines\n", y);
	return (0);
}