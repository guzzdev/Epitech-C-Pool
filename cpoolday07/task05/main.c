/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

char my_putchar(char e) {
    write(1, &e, 1);
}

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
    for (int i = argc - 1; i >= 0; i--) {
        my_putstr(argv[i]);
    }
    return 0;
}
