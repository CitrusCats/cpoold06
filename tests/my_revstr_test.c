#include <criterion/criterion.h>
#include <stdio.h>

char *my_revstr(char *str);

Test(my_revstr, revstr_test)
{
    char str[] = "ABCD";
    char rev[] = "DCBA";

    cr_assert_str_neq(str, rev);
    printf(str);
    my_revstr(str);
    printf(str);
    cr_assert_str_eq(str, rev);
}

Test(my_revstr, revstr_test2)
{
    char str[] = "12345";
    char rev[] = "54321";

    cr_assert_str_neq(str, rev);
    my_revstr(str);
    cr_assert_str_eq(str, rev);
}
