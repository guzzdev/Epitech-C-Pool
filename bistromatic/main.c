/*
** EPITECH PROJECT, 2021
** main
** File description:
** main of the bistro
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

static void display_help(void)
{
    my_putstr("USAGE\n./calc base operators size_read\n\n");
    my_putstr("DESCRIPTION\n- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the parentheses and the 5 operators\n");
    my_putstr("- size_read: number of character to be read\n");
}

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
        }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (av[1][1] == 'h') {
        display_help();
        return 0;
    }
    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    missing_operator(&expr);
    size = my_atoi2(av[3]);
    expr = get_expr(size);
    my_put_nbr(eval_expr(expr, size));
    return (EXIT_SUCCESS);
}
