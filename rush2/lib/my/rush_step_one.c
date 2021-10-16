/*
** EPITECH PROJECT, 2021
** rush_step_one
** File description:
** rush_step_one
*/

int rush_step_one(int argc, char *const *argv)
{
    int count = 0;
    char *sentence = argv[1];

    if (argc <= 1)
        return 84;
    for (int i = 0; argv[1][i] != '\0'; ++i) {
        if (sentence[i] == argv[2][0] || sentence[i] == argv[2][0]+32 || sentence[i] == argv[2][0]-32)
            ++count;
    }
    return count;
}
