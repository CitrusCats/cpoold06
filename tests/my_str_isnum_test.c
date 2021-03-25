#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, my_str_isnum_test)
{
    char str[] = "William";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_str_isnum, my_str_isnum_test2)
{
    char str[] = "1234";

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, my_str_isnum_test3)
{
    char str[] = "";

    cr_assert_eq(my_str_isnum(str), 1);
}

Test(my_str_isnum, my_str_isnum_test4)
{
    char str[] = "W-i/l243= +liam";

    cr_assert_eq(my_str_isnum(str), 0);
}

Test(my_str_isnum, my_str_isnum_test5)
{
    char str[] = "+-=)";

    cr_assert_eq(my_str_isnum(str), 0);
}