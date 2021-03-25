#include <stddef.h>

int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

char *my_strstr_old(char *str, char const *to_find)
{
    int count = 0;

    for (int i = 0; i < my_strlen(str); i++) {
        count = 0;
        for (int j = 0; j < my_strlen(to_find); j++)
            if (str[j + i] == to_find[j])
                count++;
        if (count == my_strlen(to_find))
            return str + i;
    }
    return NULL;
}
