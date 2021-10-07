/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char *str)
{
    int i;
    int j;
    int negative;

    i = 0;
    negative = 1;
    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-') {
            negative = negative * -1;
        }
        i = i + 1;
    }
    j = 0;
    while (str[i] >= 48 && str[i] <= 58) {
        j = (negative * 10) + str[i] - 48;
        i = i + 1;
    }
    return (j * negative);
}