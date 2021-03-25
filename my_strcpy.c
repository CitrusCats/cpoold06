char *my_strcpy(char *dest, const char *src)
{
    for (int i = 0; src && dest && i <= my_strlen(src); i++)
        dest[i] = src[i];
    return dest;
}

int my_strlen(const char *str)
{
    int count = 0;

    for (; str && *str != 0; ++str, ++count);
    return count;
}
