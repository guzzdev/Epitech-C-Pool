/*
** EPITECH PROJECT, 2021
** rush_step_three
** File description:
** rush_step_three
*/

void frequence(int x, int total)
{
    float pre_comma = (x * 100) / (float)total;
    float post_comma = ((pre_comma - ((int)pre_comma)) * 100);

    my_putchar('(');
    my_put_nbr((int)pre_comma);
    my_putchar('.');
    my_put_nbr((int)post_comma);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
    return;
}

int sentence_len(char e[])
{
    int i = 0;

    while (e[i] != '\0') {
        ++i;
    }
    return i;
}

int rush_step_three(int argc, char *const *argv)
{
    int count = 0;
    char *sentence = argv[1];
    int letter = 2;
    int set_len = sentence_len(sentence);

    if (argc <= 1)
        return 84;
    while (letter != argc) {
        for (int i = 0; argv[1][i] != '\0'; ++i) {
            if (sentence[i] == argv[letter][0] || sentence[i] == argv[letter][0] + 32
                || sentence[i] == argv[letter][0] - 32)
                ++count;
        }
        display(argv[letter][0], count);
        frequence(count, set_len);
        count = 0;
        ++letter;
    }
    return 0;
}
