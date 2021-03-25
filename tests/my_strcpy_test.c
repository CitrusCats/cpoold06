#include <criterion/criterion.h>

Test(my_strcpy, strcpy_test)
{
    char src[] = "ILOVEWILLIAM";
    char dest[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

    cr_assert_str_neq(src, dest);
    my_strcpy(dest, src);
    cr_assert_str_eq(src, dest);
}

Test(my_strcpy, strcpy_test2)
{
    char src[] = "aaa";
    char dest[] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

    my_strcpy(dest, 0);
}