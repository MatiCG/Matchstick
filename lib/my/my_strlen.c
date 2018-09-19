/*
** EPITECH PROJECT, 2017
** my strlen
** File description:
** wé
*/

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
