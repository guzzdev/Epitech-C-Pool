/*
** EPITECH PROJECT, 2021
** atoi_all.c
** File description:
** all atoi func
*/

int my_atoi(char **str, int op_before)
{
    int op = 1;
    int result = 0;
    int i = 0;

    if (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-')
            op = op * -1;
        *str = *str + 1;
    }
    if (*str[0] == '(')
        atoi_parenthesis(str, op_before, result);
    else
        get_print_res(str, result, op);
}

int atoi_parenthesis(char **str, int op_before, int result)
{
    if (*str[0] == '(') {
        if (op_before == '-') {
            *str = *str + 1;
            result = sum_sub(str);
            if (*str[0] == ')')
	        *str = *str + 1;
            return (result * -1);
        } else {
            *str = *str + 1;
            result = sum_sub(str);
            if (*str[0] == ')')
                *str = *str + 1;
            return (result);
        }
    }
}

int get_print_res(char **str, int result, int op)
{
    while (*str[0] > 47 && *str[0] < 58) {
        result = result * 10 + (*str[0] - 48);
        *str = *str + 1;
    }
    return (result * op);
}
