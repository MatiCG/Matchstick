/*
** EPITECH PROJECT, 2018
** get next line
** File description:
** tahu
*/

#include <stdlib.h>
#include "my.h"
#include <unistd.h>

char *get_next_line(int fd)
{
	char *buffer = malloc(sizeof(char));
	char *line = malloc(sizeof(char));

	while (buffer[0] != '\n') {
		if (read(fd, buffer, 1) == 0)
			return (NULL);
		my_strcat(line, buffer);
	}
	return (line);
}
