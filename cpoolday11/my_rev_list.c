/*
** EPITECH PROJECT, 2021
** my_rev_list
** File description:
** my_rev_list
*/

#include "include/my_list.h"

void my_rev_list(linked_list_t **begin)
{
	linked_list_t* list;
	linked_list_t* temp;
	linked_list_t* temp_next;

	list = *begin;
	temp = 0;
	while(list->next)
	{
		temp_next = list->next;
		list->next = temp;
		temp = list;
		list = temp_next;
	}
	list->next = temp;
	*begin = list;
}