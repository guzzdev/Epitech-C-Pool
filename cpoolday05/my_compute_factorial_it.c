/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it
** File description:
** Iterative function that returns the factorial of the number given as a parameter
*/

int my_compute_factorial_it(int nb){
    int result = 1;
    int i;

    if (nb <= 0){
        return 0;
    }
    for (i = nb; i >= 1; i--) {
        result = result * i;
    }

    return result;
}