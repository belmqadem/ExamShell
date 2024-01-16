void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

/*
#include <stdio.h>
int main()
{
    int x = 13;
    int y = 37;

    printf("Before Swap: X = %d and Y = %d\n", x, y);
    ft_swap(&x, &y);
    printf("After Swap: X = %d and Y = %d\n", x, y);
}
*/