#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int len1 = ft_strlen(av[2]);
    int len2 = ft_strlen(av[3]);

    if (ac == 4)
    {
        if (len1 > 1 || len2 > 1)
        {
            write (1, "\n", 1);
            return 0;
        }
        for (i = 0; av[1][i]; i++)
        {
            if (av[1][i] == av[2][0])
                av[1][i] = av[3][0];
            write (1, &av[1][i], 1);
        }
    }
    write (1, "\n", 1);
    return 0;
}