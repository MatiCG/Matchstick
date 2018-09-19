/*
** EPITECH PROJECT, 2017
** my strcpy
** File description:
** o
*/

char *my_strcpy(char *dest, char const *src)
{
	int n = 0;

	while (src[n] != '\0') {
		dest[n] = src[n];
		n += 1;
	}
	dest[n] = '\0';
	return (dest);
}
