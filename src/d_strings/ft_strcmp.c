#include "../../libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s1[i] && s2[j] && (s1[i] == s2[j]))
    {
        i++;
        j++;
    }
    if (s1[i] == '\0' && s2[j] == '\0')
        return (1);
    return (0);
}