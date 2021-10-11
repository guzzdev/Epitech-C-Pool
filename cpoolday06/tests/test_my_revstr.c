#include <criterion/criterion.h>  
#include<stdio.h>
#include<string.h>

char *my_revstr(char *str);
char *strrev(char *str);

Test(my_revstr , reverse_str)
{
    char my_dest [6] = "hello";
 
    my_revstr(my_dest);
    cr_assert_str_eq(my_dest , "olleh");
}