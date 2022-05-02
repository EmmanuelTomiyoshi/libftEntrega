#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int        i;
    char    c_dup;
    char    *s_dup;

    c_dup = (unsigned char) c;
    s_dup = (char *)s;
    i = 0;
    while (s_dup[i] != '\0')
    {
        if (s_dup[i] == c_dup)
            return (s_dup + i);
        i++;
    }
    if (c_dup == '\0')
        return (s_dup + i);
    return (NULL);
}