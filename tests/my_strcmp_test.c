#include <criterion/criterion.h>
#include <stdio.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, my_strcmp_test)
{
    char str1[] = "William";
    char str2[] = "Natalie";

    cr_assert_eq(my_strcmp(str1, str2), strcmp(str1, str2));
    cr_assert_eq(my_strcmp(str2, str1), strcmp(str2, str1));
}

Test(my_strcmp, my_strcmp_test2)
{
    char str1[] = "Natalie";
    char str2[] = "Natalie";

    cr_assert_eq(my_strcmp(str1, str2), strcmp(str1, str2));
}

Test(my_strcmp, my_strcmp_test3)
{
    char str1[] = "small";
    char str2[] = "smaller";

    printf("%i %i\n", my_strcmp(str1, str2), strcmp(str1, str2));
    cr_assert_eq(my_strcmp(str1, str2), strcmp(str1, str2));
    cr_assert_eq(my_strcmp(str2, str1), strcmp(str2, str1));
}

Test(my_strcmp, my_strcmp_test4)
{
    char str1[] = "small";
    char *str2 = NULL;

    cr_assert_eq(my_strcmp(str1, str2), strcmp(str1, str2));
    cr_assert_eq(my_strcmp(str2, str1), strcmp(str2, str1));
}
