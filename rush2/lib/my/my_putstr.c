/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
    return 0;
}