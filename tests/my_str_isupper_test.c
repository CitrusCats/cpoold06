#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(my_str_isupper, my_str_isupper_test)
{
    char str[] = "william";

    cr_assert_eq(my_str_isupper(str), 0);
}

Test(my_str_isupper, my_str_isupper_test2)
{
    char str[] = "WILLIAM";

    cr_assert_eq(my_str_isupper(str), 1);
}

Test(my_str_isupper, my_str_isupper_test3)
{
    char str[] = "";

    cr_assert_eq(my_str_isupper(str), 1);
}

Test(my_str_isupper, my_str_isupper_test4)
{
    char str[] = "W-i/l243= +liam";

    cr_assert_eq(my_str_isupper(str), 0);
}

Test(my_str_isupper, my_str_isupper_test5)
{
    char str[] = "+-=)";

    cr_assert_eq(my_str_isupper(str), 0);
}