int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

char *my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src && dest && i <= my_strlen(src); i++)
        dest[i] = src[i];
    return dest;
}

char *my_revstr_old(char *str)
{
    int length = my_strlen(str);
    char strcpy[length + 1];

    for (int i = 0; i < length; i++)
        strcpy[i] = str[length - 1 - i];
    strcpy[length] = '\0';
    return my_strcpy(str, strcpy);
}

char *my_revstr(char *str)
{
    int length = my_strlen(str);
    char s;

    for (int i = 0; i < length / 2; i++) {
        s = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = s;
    }
    return str;
}
