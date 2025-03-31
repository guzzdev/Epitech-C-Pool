/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** complement
*/

#include <stdlib.h>
#include "include/my.h"

char *eq_lenght(char *max, char *min)
{
    int count;
    int len_max = my_strlen(max);
    int len_min = my_strlen(min);
    char *tmp = malloc(sizeof(char) * len_min + 1);

    my_strcpy(tmp, min);
    min = malloc(sizeof(char) * (len_max * 2));
    count = len_max - my_strlen(tmp);
    for (int i = 0; i < count; i++)
        min[i] = '0';
    for (int i = 0; i < len_max; i++)
        min[count + i] = tmp[i];
    free(tmp);
    return min;
}

int error_handler(int argc, char **argv)
{
    if (argc < 3 || argc > 3)
        return (84);
    if (my_str_is_valid_num(argv[1]) != 1)
        return (84);
    if (my_str_is_valid_num(argv[2]) != 1)
        return (84);
}

void display(char *result)
{
    int is_zero = 1;
    int i = 0;

    for (int j = 0; result[j] != '\0'; j++)
        if (result[j] != '-' && result[j] != '0')
            is_zero = 0;
    if (is_zero == 1)
        my_putchar('0');
    else {
        if (result[i] == '-') {
            my_putchar('-');
            i++;
        }
        while (result[i] == '0')
            i++;
            while (result[i] != '\0') {
                my_putchar(result[i]);
                i++;
            }
    }
    my_putchar('\n');
}

char *add_neg_retain(char *result, int retain, int is_neg)
{
    result[0] = '0';
    result[1] = '0';
    if (retain == 1)
        result[1] = '1';
    if (is_neg < 0)
        result[0] = '-';
    return result;
}