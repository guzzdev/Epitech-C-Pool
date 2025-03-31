/*
** EPITECH PROJECT, 2021
** my_sort_params
** File description:
** my_sort_params
*/

int my_putstr(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
    my_putchar(10);
}

int my_strcmp(char const *s1 , char const *s2)
{
    int i = 0;

    while (s1[i]) {
        if (s1[i] < s2[i])
            return (-1);
        if (s1[i] > s2[i])
            return (1);
        i = i + 1;
    }
    if (s1[i] < s2[i])
        return (-1);
    else if (s1[i] > s2[i])
        return (1);
    return (0);
}

int main(int argc, char *argv[])
{
    char *temp;
    int i = 0;

    for (i = 0; i < argc - 1; i++) {
        if (my_strcmp(argv[i], argv[i + 1]) > 0) {
            temp = argv[i];
            argv[i] = argv[i + 1];
            argv[i + 1] = temp;
            i = 0;
        }
    }
    i = 0;
    while (i < argc) {
        my_putstr(argv[i]);
        i++;
    }
    return 0;
}