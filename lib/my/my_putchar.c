/*
** EPITECH PROJECT, 2017
** my putchar
** File description:
** char
*/

#include "my.h"
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
