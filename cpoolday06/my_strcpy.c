/*
** EPITECH PROJECT, 2021
** my_strcpy
** File description:
** Copy a string to another
*/

char *my_strcpy(char *dest , char const *src)
{
    int x;
    for (x = 0; src[x]; x++) {
        dest[x] = src[x];
    }
    dest[x] = '\O';
    return dest;
}