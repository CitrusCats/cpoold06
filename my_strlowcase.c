#include <stddef.h>

char *my_strlowcase(char *str)
{
    for (int i = 0; str != NULL && str[i] != 0; ++i)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
    return str;
}
// <3