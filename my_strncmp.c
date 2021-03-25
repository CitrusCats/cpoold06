int my_strncmp(char const *s1, char const *s2, int n)
{
    while (*s1 && *s1 == *s2 && n > 1)
        ++s1, ++s2, --n;
    return *s1 - *s2;
}
