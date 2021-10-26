/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** my_str_is_valid_num
*/

int my_str_is_valid_num(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < 48 || str[i] > 57) && str[i] != 43 && str[i] != 45)
            return 0;
    return 1;
}