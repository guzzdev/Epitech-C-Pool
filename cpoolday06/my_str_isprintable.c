int my_str_isprintable(char const *str)
{
    int i = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32)
            return 0;
    }
    return 1;
}