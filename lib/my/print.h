/*
** EPITECH PROJECT, 2017
** my printf
** File description:
** prototypes
*/

#ifndef PRINT_H_
#define PRINT_H_

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#define FLAGS flag_s, flag_d, flag_i, flag_c, flag_mod, \
flag_x, flag_X, flag_o, flag_b

void flag_c(va_list ap);
void flag_d(va_list ap);
void flag_i(va_list ap);
void flag_s(va_list ap);
void flag_mod(va_list ap);
void flag_x(va_list ap);
char *convert_hex(int decimal, char *hex);
void flag_X(va_list ap);
char *convert_cap_hex(int decimal, char *hex);
void flag_o(va_list ap);
char *convert_oct(int decimal, char *oct);
void flag_b(va_list ap);
char *convert_bin(int decimal, char *bin);

#endif /* PRINT_H_ */
