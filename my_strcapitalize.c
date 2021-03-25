#include <stddef.h>

char *my_strcapitalize(char *str)
{
    for (int i = 0; str != NULL && str[i] != 0; ++i) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += ('a' - 'A');
        if (str[i] >= 'a' && str[i] <= 'z')
            if (str[i - 1] < '0' || str[i - 1] > '9'
            && str[i - 1] < 'A' || str[i - 1] > 'Z'
            && str[i - 1] < 'a' || str[i - 1] > 'z')
                str[i] -= ('a' - 'A');
    }
    return str;
}
