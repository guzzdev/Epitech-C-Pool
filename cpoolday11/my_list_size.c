/*
** EPITECH PROJECT, 2021
** my_list_size
** File description:
** my_list_size
*/

#include "include/my_list.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    linked_list_t *tmp;
    int i;

    tmp = begin;
    for (i = 0; tmp != NULL; i++) {
        tmp = tmp->next;
    }
    return (i);
}