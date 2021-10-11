/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** String copy
*/

char *my_strncpy(char *dest , char const *src , int n)
{
    int i;

    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }
    if (!src [n - 1])
      dest[i] = '\0';
    return dest;
}