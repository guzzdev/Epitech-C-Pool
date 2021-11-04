/*
** EPITECH PROJECT, 2021
** test 
** File description:
** test eval
*/

int print_power(int val1, int val2)
{
    int bool = val2;
    int res = 0;
    int op = 1;

    if (val1 < 0)
        op = op * -1;
    if (val2 == 0)
        return (1);
    if (val2 == 1)
        return (val1);
    if (val2 > 1) {
        res = val1 * val1;
        bool--;
        bool--;
    }
    while (bool != 0) {
        res = res * val1;
        bool--;
    }
    return (res * op);
}

int which_op(int val1, char op, int val2)
{
    if (op == '+')
        return (val1 + val2);
    else if (op == '-')
	return (val1 - val2);
    else if (op == '*')
        return (val1 * val2);
    else if (op == '/')
        return (val1 / val2);
    else if (op == '%')
	return (val1 % val2);
    else if (op == '^')
        return(print_power(val1, val2));
    return (0);
}

int first_op(char **str)
{
    int	val1 = my_atoi(str, 0);
    int	val2;
    char op;
    
    while (*str[0] == '*' || *str[0] == '/' || *str[0] == '%' || *str[0] == '^') {
        op = *str[0];
        *str = *str + 1;
        val2 = my_atoi(str, 0);
        val1 = which_op(val1, op, val2);
    }
    return (val1);
}

int sum_sub(char **str)
{
    int val1 = my_atoi(str, 0);
    int val2;
    char op;

    while (*str[0] != '\0' && *str[0] != ')') {
        op = *str[0];
        *str = *str + 1;
        if (op == '-' || op == '+')
            val2 = first_op(str);
        else
            val2 = my_atoi(str, op);
        val1 = which_op(val1, op, val2);
    }
    return (val1);
}