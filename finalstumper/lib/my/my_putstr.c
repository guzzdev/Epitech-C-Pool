/*
** EPITECH PROJECT, 2021
** my_putstr.c
** File description:
** task02
*/

int my_putstr(char const *str)
{
    int i;
    i = 0;
    while(str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
}