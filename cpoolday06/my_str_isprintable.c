/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32)
            return 0;
    }
    return 1;
}