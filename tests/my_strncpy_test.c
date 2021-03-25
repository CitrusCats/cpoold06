#include <criterion/criterion.h>

char *my_strncpy(char *dest, const char *src, int n);

Test(my_strncpy, strncpy_test)
{
    char src[] = "AAAAA";
    char dest[] = "BBBBB";

    cr_assert_str_neq(src, dest);
    my_strncpy(dest, src, 3);
    cr_assert_str_eq(dest, "AAABB");
}

Test(my_strncpy, strncpy_test2)
{
    char src[] = "AAA";
    char dest[] = "BBB";

    my_strncpy(dest, 0, 3);
}

Test(my_strncpy, strncpy_test3)
{
    char src[] = "AAA";
    char dest [] = "BBBBB";

    my_strncpy(dest, src, 5);
    cr_assert_str_eq(dest, "AAA");
}

Test(my_strncpy, strncpy_test4)
{
    char src[] = "AAAAA";
    char dest [] = "BBBBB";

    cr_assert_eq(my_strncpy(dest, src, 0), dest);
    cr_assert_str_eq(dest, "BBBBB");
}

Test(my_strncpy, strncpy_test5)
{
    char src[] = "AAAAA";
    char dest [] = "BBBBB";

    my_strncpy(dest, src, -3);
    cr_assert_str_eq(dest, "BBBBB");
}
