/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return (dest);
}