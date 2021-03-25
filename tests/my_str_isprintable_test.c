#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, my_str_isprintable_test)
{
    char str[] = "william";

    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, my_str_isprintable_test2)
{
    char str[] = "WILLIAM";

    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, my_str_isprintable_test3)
{
    char str[] = "";

    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, my_str_isprintable_test4)
{
    char str[] = "W-i/l243= +liam";

    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, my_str_isprintable_test5)
{
    char str[] = "+-=)";

    cr_assert_eq(my_str_isprintable(str), 1);
}

Test(my_str_isprintable, my_str_isprintable_test6)
{
    char str[] = "\7";

    cr_assert_eq(my_str_isprintable(str), 0);
}

Test(my_str_isprintable, my_str_isprintable_test7)
{
    char str[] = "Henlo!\5 Will\n Nyan~ \2";

    cr_assert_eq(my_str_isprintable(str), 0);
}