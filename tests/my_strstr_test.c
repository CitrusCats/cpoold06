#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test (my_strstr, my_strstr_test)
{
    char haystack[] = "xxxWWWWilliamWilliamxxx";
    char needle[] = "William";
    char ret[] = "WilliamWilliamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_str_eq(test, ret);
}

Test (my_strstr, my_strstr_test2)
{
    char haystack[] = "xxxWWWWWWWWWWWWWWWWWWWWWilliamWilliamxxx";
    char needle[] = "William";
    char ret[] = "WilliamWilliamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_str_eq(test, ret);
}

Test (my_strstr, my_strstr_test3)
{
    char haystack[] = "xxxWWWWilliamxxx";
    char needle[] = "William";
    char ret[] = "Williamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_str_eq(test, ret);
}

Test (my_strstr, my_strstr_test4)
{
    char haystack[] = "xxxWilliamxxx";
    char needle[] = "William";
    char ret[] = "Williamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_str_eq(test, ret);
}

Test (my_strstr, my_strstr_test5)
{
    char haystack[] = "xxxWilliaxxx";
    char needle[] = "William";
    char ret[] = "Williamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_eq(test, NULL);
}

Test (my_strstr, my_strstr_test6)
{
    char haystack[] = "smaller";
    char needle[] = "smalleryetbiggeraaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    char ret[] = "Williamxxx";

    cr_assert_str_neq(needle, ret);
    char *test = my_strstr(haystack, needle);
    cr_assert_eq(test, NULL);
}
