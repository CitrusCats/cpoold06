#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, my_str_islower_test)
{
    char str[] = "william";

    cr_assert_eq(my_str_islower(str), 1);
}

Test(my_str_islower, my_str_islower_test2)
{
    char str[] = "WILLIAM";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, my_str_islower_test3)
{
    char str[] = "";

    cr_assert_eq(my_str_islower(str), 1);
}

Test(my_str_islower, my_str_islower_test4)
{
    char str[] = "W-i/l243= +liam";

    cr_assert_eq(my_str_islower(str), 0);
}

Test(my_str_islower, my_str_islower_test5)
{
    char str[] = "+-=)";

    cr_assert_eq(my_str_islower(str), 0);
}