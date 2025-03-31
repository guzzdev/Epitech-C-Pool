/*
** EPITECH PROJECT, 2021
** test_my_str_islower
** File description:
** test_my_str_islower
*/

char *my_strlowcase(char *str);


Test(my_strncpy , test_name)
{
    char dest[] = "ABC";

    my_strlowcase(dest);
    cr_assert_str_eq(dest , "abc");
}