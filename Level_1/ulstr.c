#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        for (i = 0; av[1][i]; i++)
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] -= 32;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] += 32;
            write (1, &av[1][i], 1);
        }
    }
    write (1, "\n", 1);
    return 0;
}