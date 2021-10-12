/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** my_strcat
*/

char *my_strcat(char *dest , char const *src)
{
    int dest_lenght;
    int i;
    for (dest_lenght = 0; dest[dest_lenght] != '\0'; dest_lenght++);
    for (i = 0; src[i] != '\0'; i++)
        dest[dest_lenght + i] = src[i];
    dest[dest_lenght + i] = '\0';
    return (dest);
}