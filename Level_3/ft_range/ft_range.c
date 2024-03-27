#include <stdlib.h>

int *ft_range(int start, int end)
{
    int size;
    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;
    int *arr = (int *)malloc(size * sizeof(int));
    if (NULL == arr)
        return NULL;
    int i = 0;
    while (start <= end)
    {
        arr[i] = start;
        i++;
        start++;
    }
    while (start >= end)
    {
        arr[i] = start;
        i++;
        start--;
    }
    return (arr);
}

