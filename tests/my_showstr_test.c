#include <criterion/criterion.h>

int my_showstr(char const *str);

Test(my_showstr, my_showstr_test)
{
    char str[] = "hello \n world";

    my_showstr(str);
}

Test(my_showstr, my_showstr_test2)
{
    char str[] = "something normal";

    my_showstr(str);
}

Test(my_showstr, my_showstr_test3)
{
    char str[] = "\17 something \5 not \3 normal \37";

    my_showstr(str);
}
