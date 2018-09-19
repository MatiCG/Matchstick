/*
** EPITECH PROJECT, 2017
** my revstr
** File description:
** o
*/

#include "my.h"

char *my_revstr(char *str)
{
	int i = my_strlen(str);
	int temp;
	int j = 0;

	i--;
	while (j < i) {
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}
