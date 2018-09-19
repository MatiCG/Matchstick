/*
** EPITECH PROJECT, 2017
** my putstr
** File description:
** put
*/

#include "my.h"

int my_putstr(char const *str)
{
	int n = 0;

	while (str[n] != '\0') {
		my_putchar(str[n]);
		n += 1;
	}
}
