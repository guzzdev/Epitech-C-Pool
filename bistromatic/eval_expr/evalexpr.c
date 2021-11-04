/*
** EPITECH PROJECT, 2021
** test
** File description:
** test 
*/

int cut_str(char *str, int size)
{
    int i = 0;
    while (str[i] != '\0' && i < size)
        i++;
    str[i] = '\0';
}

char **without_space(char *str)
{
    int	i = 0;
    int	j = 0;
    char **str2;

    str2 = malloc(sizeof(char**));
    str2[0] = malloc(sizeof(char*) * my_strlen(str + 1));
    while (str[i] != '\0') {
        if (str[i] == ' ')
            i++;
        else {
            str2[0][j] = str[i];
            i++;
            j++;
        }
    }
    str2[0][j] = '\0';
    return (str2);
}

int eval_expr2(char **str)
{
    str = without_space(str[0]);
    return (sum_sub(str));
}

int eval_expr(char *expr, unsigned int size)
{
    cut_str(expr, size);
    return (eval_expr2(&expr));
}
