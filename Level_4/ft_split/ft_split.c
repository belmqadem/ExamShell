#include <stdio.h>
#include <stdlib.h>

int ft_word_count(char *str)
{
    int count = 0;
    int i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            count++;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    return count;
}

char    *ft_strncpy(char *dst, char *src, int n)
{
    int i = 0;
    while (src[i] && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

char    **ft_split(char *str)
{
    char    **split;
    int     count = ft_word_count(str);
    split = (char **)malloc((count + 1)* sizeof(char *));
    if (NULL == split)
        return (NULL);
    int i = 0;
    int j = 0;
    int k = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if (i > j)
        {
            split[k] = (char *)malloc(((i - j) + 1) * sizeof(char));
            if (NULL == split[k])
                return (NULL);
            ft_strncpy(split[k++], &str[j], i - j);
        }
    }
    split[k] = NULL;
    return (split);
}
