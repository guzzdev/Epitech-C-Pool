/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** my_str_isupper
*/

char my_str_isupper(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122)
            return 0;
    }
    return 1;
}