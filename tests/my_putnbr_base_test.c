#include <stdio.h>

int my_putnbr_base(int nbr, char const *base);

int main()
{
    int nbr = -12345;
    char base[] = "1337";

    printf("%i\n", nbr);
    printf("%x\n", nbr);
    my_putnbr_base(nbr, base);
}


