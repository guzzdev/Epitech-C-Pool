/*
** EPITECH PROJECT, 2021
** my_compute_power_it
** File description:
** It compute power function
*/

int my_compute_power_it(int nb, int p)
{
    int i;
    int result = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    for (i = 0; i < p; i++) {
        result = result * nb;
    }
    return result;
}