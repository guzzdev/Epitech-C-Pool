/*
** EPITECH PROJECT, 2021
** error_handling.c
** File description:
** error handling file 1 of the bistro-matic
*/

#include <stdlib.h>

int missing_operator(char **str)
{
    int i = 0;
    int bool = 1;

    while (str[0][i] != '\0') {
        if (str[0][i] == '+' || str[0][i] == '-' || str[0][i] == '*')
            bool = 0;
        if (str[0][i] == '/' || str[0][i] == '%' || str[0][i] == '^')
            bool = 0;
        i++;
    }
    if (bool == 1) {
        my_putstr("syntax error");
        exit (84);
    }
    if (!bool)
        return (0);
}
