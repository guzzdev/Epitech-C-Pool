/*
** EPITECH PROJECT, 2021
** Epitech
** File description:
** test_my_strcmp
*/


Test(my_revstr , reverse_str)
{
    char my_dest [6] = "hello";
 
    cr_assert_str_eq(my_dest , "helo");
}