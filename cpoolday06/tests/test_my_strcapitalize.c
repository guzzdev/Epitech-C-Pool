/*
** EPITECH PROJECT, 2021
** epitech
** File description:
** test_my_strcapitalize
*/

char *my_strncpy(char *dest , char const *src , int n);

Test(my_revstr , reverse_str)
{
    char my_dest [6] = "hello";
 
    cr_assert_str_eq(my_dest , "hello");
}