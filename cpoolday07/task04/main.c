/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
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
