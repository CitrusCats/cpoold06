#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, my_strcapitalize_test)
{
    char str[] = "hey, how are you? 42WORds forty-two; fifty+one";
    char str2[] = "Hey, How Are You? 42words Forty-Two; Fifty+One";

    cr_assert_str_eq(my_strcapitalize(str), str2);
}