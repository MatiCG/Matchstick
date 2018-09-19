/*
** EPITECH PROJECT, 2017
** getnbr
** File description:
** get number
*/

#include "my.h"

int my_getnbr(char const *str)
{
	int n = 0;
	int c = 0;

	while (str[n] != '\0') {
		if (str[n] >= '0' && str[n] <= '9') {
			c = c*10 + (str[n] - '0');
		}
		n++;
	}
	if (str[0] == '-')
		c = -c;
	return (c);
}
