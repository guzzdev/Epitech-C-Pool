/*
** EPITECH PROJECT, 2021
** my_strstr
** File description:
** search a substring in a string
*/

int    my_strlen2(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_strstr(char *str , char const *to_find) {
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; to_find[j] == str[i + j]; j++)
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
		}
	}
	return (0);
}