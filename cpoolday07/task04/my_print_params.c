/*
** EPITECH PROJECT, 2021
** my_print_params
** File description:
** my_print_params
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

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++) {
        my_putstr(argv[i]);
    }
    return 0;
}
