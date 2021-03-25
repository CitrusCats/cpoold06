int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}

char *my_strncpy(char *dest, const char *src, int n)
{
    int len = n - 1;

    if (my_strlen(src) < n)
        len = my_strlen(src);
    for (int i = 0; src && dest && i <= len; i++)
        dest[i] = src[i];
    return dest;
}
