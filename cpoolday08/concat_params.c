/*
** EPITECH PROJECT, 2021
** concat_params
** File description:
** concat_params
*/

char *concat_params(int argc , char **argv)
{
    char *dest;
    int dest_size = 0;
    int i;

    for (i = 0; i < argc; i++)
        dest_size = dest_size + my_strlen(argv[i]) + 1;
    dest = malloc(sizeof(char) * dest_size + 1);
    for (i = 0; i < argc; i++)
        my_strcat(my_strcat(dest, argv[i]), "\n");
    my_strcat(dest, "\0");
    return (dest);
}