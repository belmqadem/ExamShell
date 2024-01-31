#include <unistd.h>

int ft_strlen(char *str)
{
    int i;
    for (i = 0; str[i]; i++);
    return i;
}

void    ft_putstr(char *str)
{
    while (*str)
        write (1, str++, 1);
}

int main(int ac, char **av)
{
    int i, j, count;
    if (ac == 3)
    {
        j = 0;
        for (i = 0; av[1][i]; i++)
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    count += 1;
                    break;
                }
                j++;
            }
        }
        if (count == ft_strlen(av[1]))
            ft_putstr(av[1]);
    }
    write (1, "\n", 1);
}