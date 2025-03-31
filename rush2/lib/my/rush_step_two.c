/*
** EPITECH PROJECT, 2021
** rush_step_twoo
** File description:
** rush_step_two
*/

int rush_step_two(int argc, char *const *argv)
{
    int count = 0;
    char *sentence = argv[1];
    int letter = 2;

    if (argc <= 1)
        return 84;
    while (letter != argc) {
        for (int i = 0; argv[1][i] != '\0'; ++i) {
            if (sentence[i] == argv[letter][0] || sentence[i] == argv[letter][0]+32
                || sentence[i] == argv[letter][0]-32)
                ++count;
        }
        display(argv[letter][0], count);
        count = 0;
        ++letter;
    }
    return 0;
}
