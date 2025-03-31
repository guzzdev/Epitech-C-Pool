/*
** EPITECH PROJECT, 2021
** B-CPE-101-LYN-1-1-infinadd-louis.olive
** File description:
** infin_add
*/

#include "include/my.h"
#include "include/split.h"
#include <stdlib.h> 

/**
** Calculate same sign addition
**
** @param num1 first number argument
** @param num2 second number argument
** @param is_neg is first number positive
*/
void calculate_add(char *num1, char *num2, int is_neg)
{
    int len_num_1 = my_strlen(num1);
    char *result = malloc(sizeof(char) * len_num_1 + 3);
    int current_num;
    int retained_num = 0;

    result[len_num_1 + 2] = '\0';
    for (int i = (len_num_1 - 1); i >= 0; i--) {
        current_num = (num1[i] - 48) + (num2[i] - 48) + retained_num;
        if (current_num > 9) {
            retained_num = 1;
            current_num = current_num % 10;
        }
        else
            retained_num = 0;
        result[i + 2] = current_num + 48;
    }
    display(add_neg_retain(result, retained_num, is_neg));
    free(result);
}

/**
** Calculate different sign addition
**
** @param num1 first number argument
** @param num2 second number argument
** @param is_neg is first number positive
*/
void calculate_sub(char *num1, char *num2, int neg)
{
    char *result = malloc(sizeof(char) * my_strlen(num1) + 3);
    int curr_nb;
    int carr_nbr = 0;

    result[my_strlen(num1) + 2] = '\0';
    for (int i = my_strlen(num1) - 1; i >= 0; i--) {
        curr_nb = (num1[i] - 48) - ((num2[i] - 48) + carr_nbr);
        if (curr_nb < 0) {
            curr_nb = ((num1[i] - 48) + 10) - ((num2[i] - 48) + carr_nbr);
            carr_nbr = 1;
        }
        else
            carr_nbr = 0;
        result[i + 2] = curr_nb + 48;
    }
    display(add_neg_retain(result, carr_nbr, neg));
    free(result);
}

/**
** Handle same sign addition
**
** @param num1 first number argument
** @param num2 second number argument
** @param is_neg is first number positive
*/
void add_same_sign(char *num1, char *num2, int is_neg)
{
    for (int i = 0; num1[i] == '-' || num1[i] == '+'; i++)
        num1[i] = '0';
    for (int i = 0; num2[i] == '-' || num2[i] == '+'; i++)
        num2[i] = '0';
    if (my_strlen(num1) >= my_strlen(num2))
        num2 = eq_lenght(num1, num2);
    else
        num1 = eq_lenght(num2, num1);
    calculate_add(num1, num2, is_neg);
}

/**
** Handle different sign addition
** 
** @param num1 first number argument
** @param num2 second number argument
** @param is_neg_num1 is first number positive
** @param is_neg_num2 is second number positive
*/
void substract(char *num1, char *num2, int is_neg_num1, int is_neg_num2)
{
    for (int i = 0; num1[i] == '-' || num1[i] == '+'; i++)
        num1[i] = '0';
    for (int i = 0; num2[i] == '-' || num2[i] == '+'; i++)
        num2[i] = '0';
    if (my_strlen(num1) > my_strlen(num2))
        num2 = eq_lenght(num1, num2);
    else
        num1 = eq_lenght(num2, num1);
    if (my_strcmp(num1, num2) < 0)
        calculate_sub(num1, num2, is_neg_num1);
    else
        calculate_sub(num2, num1, is_neg_num2);
}

int main(int argc, char **argv)
{
    if (error_handler(argc, argv) == 84)
        return (84);
    else if (is_neg(argv[1]) == is_neg(argv[2]))
        add_same_sign(argv[1], argv[2], is_neg(argv[1]));
    else
        substract(argv[1], argv[2], is_neg(argv[1]), is_neg(argv[2]));
    return 0;
}