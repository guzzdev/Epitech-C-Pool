/*
** EPITECH PROJECT, 2021
** my_params_to_array
** File description:
** my_params_to_array
*/

struct info_param
{
    int length; // parameter 's length
    char *str; // parameter 's address
    char *copy; // parameter 's copy
    char ** word_array; // the result of my_str_to_word_array(str)
};

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param *result;
    
    result = malloc(sizeof(struct info_param) * ac);
    for (int i = 0; i < ac; i++) {
        result[i].length = my_strlen(av[i]);
        result[i].str = av[i];
        result[i].copy = my_strdup(av[i]);
        result[i].word_array = my_str_to_word_array(concat_params(ac, av));
    }
    return (result);
}