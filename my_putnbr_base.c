#include <limits.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

void test(int nbr, char const *base, int length)
{
    if (nbr == 0)
        return;
    test(nbr / length, base, length);
    my_putchar(base[nbr % length]);
}

int my_putnbr_base(int nbr, char const *base)
{
    int length = my_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    test(nbr, base, length);
    return 0;
}
