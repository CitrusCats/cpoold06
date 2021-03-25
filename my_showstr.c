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

int my_showstr(char const *str)
{
    for (; str && *str != 0; str++) {
        if (*str >= ' ' && *str <= '~')
            my_putchar(*str);
        else {
            my_putchar('\\');
            if (*str < 16)
                my_putchar('0');
            my_putnbr_base(*str, "0123456789abcdef");
        }
    }
    return 0;
}

// <3
