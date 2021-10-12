/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** Capitalize string
*/

char *my_strlowcase2(char *str)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
	}
	return (str);
}

char *my_strcapitalize(char *str)
{
	int i = 1;
	char start_char = 97;
	char end_char = 122;
	
	str = my_strlowcase2(str);
	if (str[i] >= 97 && str[i] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0') {
		if (str[i-1] > 31 && str[i-1] < 48 && str[i] >= start_char && str[i] <= end_char)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}