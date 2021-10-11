/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** String copy
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    dest[n] = '\0';
    return dest;
}