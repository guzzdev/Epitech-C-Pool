/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

char *my_strdup(char const *src)
{
    char *dest;
    int i;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}