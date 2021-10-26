/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
