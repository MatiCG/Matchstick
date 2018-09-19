/*
** EPITECH PROJECT, 2017
** my printf
** File description:
** more flags
*/

#include "my.h"
#include "print.h"

void flag_X(va_list ap)
{
	char *hex;
	int len = 0;
	int decimal = va_arg(ap, int);

	if (decimal == 0)
		my_putchar('0');
	else {
		for (int a = decimal;a > 0; a = a / 16)
			len++;
		hex = malloc(sizeof(char) * len);
		convert_cap_hex(decimal, hex);
		my_putstr(my_revstr(hex));
		free(hex);
	}
}

void flag_x(va_list ap)
{
	char *hex;
	int len = 0;
	int decimal = va_arg(ap, int);

	if (decimal == 0)
		my_putchar('0');
	else {
		for (int a = decimal; a > 0; a = a / 16)
			len++;
		hex = malloc(sizeof(char) * len);
		convert_hex(decimal, hex);
		my_putstr(my_revstr(hex));
		free(hex);
	}
}

void flag_o(va_list ap)
{
	char *oct;
	int len = 0;
	int decimal = va_arg(ap, int);

	if (decimal == 0)
		my_putchar('0');
	else {
		for (int a = decimal; a > 0; a = a / 8)
			len++;
		oct = malloc(sizeof(char) * len);
		convert_oct(decimal, oct);
		my_putstr(my_revstr(oct));
		free(oct);
	}
}

void flag_b(va_list ap)
{
	char *bin;
	int len = 0;
	int decimal = va_arg(ap, int);

	if (decimal == 0)
		my_putchar('0');
	else {
		for (int a = decimal; a > 0; a = a / 2)
			len++;
		bin = malloc(sizeof(char) * len);
		convert_bin(decimal, bin);
		my_putstr(my_revstr(bin));
		free(bin);
	}
}

void flag_mod(va_list ap)
{
	my_putchar('%');
}
