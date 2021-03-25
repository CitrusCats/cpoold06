#include <criterion/criterion.h>
#include <stdio.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, my_strncmp_test)
{
    char str1[] = "William";
    char str2[] = "Natalie";
    int n = 2;

    cr_assert_eq(my_strncmp(str1, str2, n), strncmp(str1, str2, n));
    cr_assert_eq(my_strncmp(str2, str1, n), strncmp(str2, str1, n));
}

Test(my_strncmp, my_strncmp_test2)
{
    char str1[] = "William";
    char str2[] = "Wilalie";
    int n = 0;

    printf("%i %i \n", my_strncmp(str1, str2, n), strncmp(str1, str2, n));
    cr_assert_eq(my_strncmp(str1, str2, n), strncmp(str1, str2, n));
    cr_assert_eq(my_strncmp(str2, str1, n), strncmp(str2, str1, n));
}

Test(my_strncmp, my_strncmp_test3)
{
    char str1[] = "Will";
    char str2[] = "Natalie";
    int n = 6;

    cr_assert_eq(my_strncmp(str1, str2, n), strncmp(str1, str2, n));
    cr_assert_eq(my_strncmp(str2, str1, n), strncmp(str2, str1, n));
}
