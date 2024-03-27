void    ft_swap(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void    sort_int_tab(int *tab, unsigned int size)
{
    int i;
    while (size > 0)
    {
        i = 0;
        while (i < size - 1)
        {
            if (tab[i] > tab[i+1])
                ft_swap(&tab[i], &tab[i+1]);
            i++;
        }
        size--;
    }
}
