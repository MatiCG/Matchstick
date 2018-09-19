/*
** EPITECH PROJECT, 2018
** Mini Shell 1
** File description:
** test strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int size_d = my_strlen(dest);
	int i = 0;

	while (src[i] != '\0') {
		dest[size_d + i] = src[i];
		i++;
	}
	dest[size_d + i] = '\0';
	return (dest);
}
