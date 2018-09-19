/*
** EPITECH PROJECT, 2017
** put nbr
** File description:
** disp nbr
*/

#include "my.h"

void my_put_nbr(int nb)
{
	int div = 1000000000;
	int display;

	if (nb < 0) {
		nb = nb * -1;
		my_putchar('-');
	} else if (nb == 0)
		my_putchar('0');
	while (div > 0) {
		display = nb / div % 10 + 48;
		if (nb > div - 1)
			my_putchar(display);
		div = div / 10;
	}
}
