/*
** EPITECH PROJECT, 2021
** my_strupcase
** File description:
** To upcase
*/

char *my_strupcase(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}