/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "include/my_list.h"

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t **list;

    list = NULL;
    for (int i = 0; i < ac; i++) {
        my_put_in_list(&list, av[i]);
    }
    return list;
}

int my_put_in_list(linked_list_t **list, char *data)
{
    linked_list_t *element;

    element = malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element;
    return (0);
}