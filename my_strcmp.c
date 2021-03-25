int my_strcmp_old(char const *s1, char const *s2)
{
    for (; !(*s1 == 0 && *s2 == 0); ++s1, ++s2)
        if (*s1 != *s2)
            return *s1 - *s2;
    return 0;
}

int my_strcmp(char const *s1, char const *s2)
{
    while (*s1 && *s1 == *s2)
        ++s1, ++s2;
    return *s1 - *s2;
}
