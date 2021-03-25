#include <criterion/criterion.h>
#include <stdio.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, my_strlowcase_test)
{
    char str2[] = "william";
    char str[] = "WILLIAM";

    cr_assert_str_eq(my_strlowcase(str), str2);
}

Test(my_strlowcase, my_strlowcase_test2)
{
    char str2[] = "w1ll1am";
    char str[] = "W1LL1AM";

    cr_assert_str_eq(my_strlowcase(str), str2);
}

Test(my_strlowcase, my_strlowcase_test3)
{
    char str2[] = "william";
    char str[] = "WIllIAM";

    cr_assert_str_eq(my_strlowcase(str), str2);
}
