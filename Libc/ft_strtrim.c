#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  start;
    size_t  end;
    size_t  len;
    char    *trimmed;

    if (!s1 || !set)
        return (NULL);

    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;

    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;

    len = end - start;
    trimmed = malloc(len + 1);
    if (!trimmed)
        return (NULL);

    ft_memcpy(trimmed, s1 + start, len);
    trimmed[len] = '\0';
    return (trimmed);
}

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *res;

    // 1. Trim spaces from both ends
    res = ft_strtrim("   Hello World   ", " ");
    printf("1: \"%s\"\n", res);
    free(res);

    // 2. Trim multiple characters (spaces, tabs, newlines)
    res = ft_strtrim("\t\n  Hello 42 \n\t", " \n\t");
    printf("2: \"%s\"\n", res);
    free(res);

    // 3. Trim specific characters (x and y)
    res = ft_strtrim("xxyHello Worldyyx", "xy");
    printf("3: \"%s\"\n", res);
    free(res);

    // 4. String with no characters to trim
    res = ft_strtrim("Hello", " ");
    printf("4: \"%s\"\n", res);
    free(res);

    // 5. String contains only characters from set
    res = ft_strtrim("xxxx", "x");
    printf("5: \"%s\"\n", res);  // should print empty string
    free(res);

    // 6. Empty string
    res = ft_strtrim("", "abc");
    printf("6: \"%s\"\n", res);  // should print empty string
    free(res);

    // 7. Empty set
    res = ft_strtrim("Hello World", "");
    printf("7: \"%s\"\n", res);  // should print original string
    free(res);

    return 0;
}

