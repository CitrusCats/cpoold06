#include <criterion/criterion.h>
#include <stdio.h>

char *my_strupcase(char *str);

Test(my_strupcase, my_strupcase_test)
{
    char str[] = "william";
    char str2[] = "WILLIAM";

    cr_assert_str_eq(my_strupcase(str), str2);
}

Test(my_strupcase, my_strupcase_test2)
{
    char str[] = "w1ll1am";
    char str2[] = "W1LL1AM";

    cr_assert_str_eq(my_strupcase(str), str2);
}

Test(my_strupcase, my_strupcase_test3)
{
    char str[] = "wiLLiam";
    char str2[] = "WILLIAM";

    cr_assert_str_eq(my_strupcase(str), str2);
}
