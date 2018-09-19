/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** basically printf but worse
*/

#include <stdarg.h>
#include "my.h"
#include "print.h"
#include <stdio.h>

void flag_s(va_list ap)
{
	my_putstr(va_arg(ap, char *));
}

void flag_d(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void flag_i(va_list ap)
{
	my_put_nbr(va_arg(ap, int));
}

void flag_c(va_list ap)
{
	char c = (char) va_arg(ap, int);
	my_putchar(c);
}

int my_printf(char *str, ...)
{
	va_list ap;
	char *flags = "sdic%xXob";
	int i;

	va_start(ap, str);
	void (*fun[9])(va_list) = {FLAGS};
	while (*str) {
		if (*str == '%') {
			*str++;
			i = 0;
			for (; *str != flags[i]; i++) {
				if (!flags[i])
					break;
			}
			if (!flags[i])
				my_putchar(*str);
			else
				fun[i](ap);
		} else {
			my_putchar(*str);
		}
		*str++;
	}
	va_end(ap);
}
