#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

void my_putbase_req(int nbr, char const *base, int length)
{
    if (nbr == 0)
        return;
    my_putbase_req(nbr / length, base, length);
    my_putchar(base[nbr % length]);
}

int count_digit(int nbr, int base)
{
    int count = 0;

    while (nbr != 0) {
        nbr /= base;
        ++count;
    }
    return count;
}

int my_putstr(const char *str)
{
    for (; str && *str != 0; str++)
        my_putchar(*str);
}

int my_putnbr_base(int nbr, int pad, char const *base)
{
    int length = my_strlen(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    if (pad == 0)
        pad = 1;
    pad -= count_digit(nbr, length);
    for (; pad > 0; --pad)
        my_putchar(*base);
    my_putbase_req(nbr, base, length);
    return 0;
}

int my_showmem(char const *str, int size)
{
    for (int i = 0; i < size; i += 16) {
        my_putnbr_base(i, 8, "0123456789abcdef");
        my_putchar(':');
        for (int j = i; j < i + 16; ++j) {
            if (j % 2 == 0)
                my_putchar(' ');
            if (j >= size)
                my_putstr("  ");
            else
                my_putnbr_base((unsigned char)str[j], 2, "0123456789abcdef");
        }
        my_putchar(' ');
        for (int j = i; j < i + 16 && j < size; ++j) {
            if (str[j] >= ' ' && str[j] <= '~')
                my_putchar(str[j]);
            else
                my_putchar('.');
        }
        my_putchar('\n');
    }
    return 0;
}
