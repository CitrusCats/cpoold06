#include <criterion/criterion.h>

int my_getnbr_base(char const *str, char const *base);

Test(my_getnbr_base, my_getnbr_base_test)
{
    char nbr[] = "FF";
    char base[] = "0123456789ABCDEF";
    int result = 0xFF;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test2)
{
    char nbr[] = "69";
    char base[] = "0123456789";
    int result = 69;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test3)
{
    char nbr[] = "1001";
    char base[] = "01";
    int result = 0b1001;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test4)
{
    char nbr[] = "e99e";
    char base[] = "9e";
    int result = 0b1001;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test5)
{
    char nbr[] = "e99F";
    char base[] = "9e";
    int result = 0;

    //printf("%i\n", my_getnbr_base(nbr, base));
    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test6)
{
    char nbr[] = "---69";
    char base[] = "0123456789";
    int result = -69;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test7)
{
    char nbr[] = "--+69";
    char base[] = "0123456789";
    int result = 69;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test8)
{
    char nbr[] = "--+69+++--+123";
    char base[] = "0123456789";
    int result = 0;

    cr_assert_eq(my_getnbr_base(nbr, base), result);
}

Test(my_getnbr_base, my_getnbr_base_test9)
{
    char nbr[] = "--+69+++--+123";
    char base[] = "0123456789";
    int result = 0;

    cr_assert_eq(my_getnbr_base(nbr, NULL), result);
}