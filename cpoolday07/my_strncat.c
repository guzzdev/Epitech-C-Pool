/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/


char *my_strncat(char *dest , char const *src , int nb)
{
    int dest_lenght;
    int i;

    for (dest_lenght = 0; dest[dest_lenght] != '\0'; dest_lenght++);
    for (i = 0; src[i] != '\0' && i < nb; i++)
        dest[dest_lenght + i] = src[i];
    dest[dest_lenght + i] = '\0';
    return (dest);
}