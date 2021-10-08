/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** returns the square root of a whole number given as argument
*/
#include <stdio.h>

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb/2; i++) {
        if (i*i == nb)
            return i;
    }
    return 0;
}

int my_compute_square_root(int nb) {

}

int main(int argc, char const *argv[])
{
    printf("%d", my_compute_square_root(25000000));
    return 0;
}
