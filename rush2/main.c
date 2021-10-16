/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

int main(int argc, char const *argv[])
{
    char *sentence = argv[1];
    char letter = argv[2][0];
    int count = 0;

    if (argc > 0) {
        for (int i = 0; sentence[i] != '\0'; i++) {
            if (sentence[i] == letter || sentence[i] == letter+32 || sentence[i] == letter-32)
                count++;
        }
    }

    return 0;
}