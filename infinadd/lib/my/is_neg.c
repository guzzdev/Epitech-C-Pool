/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** is_neg
*/

int is_neg(char *nb)
{
    int is_neg = 1;

    if (nb[0] == '-')
        is_neg = -1;
    return is_neg;
}