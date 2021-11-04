/*
** EPITECH PROJECT, 2021
** bistrot_funcs.c
** File description:
** bistrot funcs
*/

int cut_str(char *str, int size)
{
    int i = 0;
    while (str[i] != '\0' && i < size)
        i++;
    str[i] = '\0';
}