/*
** EPITECH PROJECT, 2021
** my_swap
** File description:
** function that swaps the content of two integers
*/


void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
