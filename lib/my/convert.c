/*
** EPITECH PROJECT, 2017
** my printf
** File description:
** conversions
*/

#include "print.h"
#include "my.h"

char *convert_cap_hex(int decimal, char *hex)
{
	int nb;

	for (int i = 0; decimal != 0; i++) {
		nb = decimal % 16;
		if (nb >= 10)
			nb += 55;
		else
			nb += 48;
		hex[i] = nb;
		decimal = decimal / 16;
	}
	return (hex);
}

char *convert_hex(int decimal, char *hex)
{
	int nb;

	for (int i = 0; decimal != 0; i++) {
		nb = decimal % 16;
		if (nb >= 10)
			nb += 87;
		else
			nb += 48;
		hex[i] = nb;
		decimal = decimal / 16;
	}
	return (hex);
}

char *convert_oct(int decimal, char *oct)
{
	int nb;

	for (int i = 0; decimal != 0; i++) {
		nb = decimal % 8;
		nb += 48;
		oct[i] = nb;
		decimal = decimal / 8;
	}
	return (oct);
}

char *convert_bin(int decimal, char *bin)
{
	int nb;

	for (int i = 0; decimal != 0; i++) {
		nb = decimal % 2;
		nb += 48;
		bin[i] = nb;
		decimal = decimal / 2;
	}
	return (bin);
}
