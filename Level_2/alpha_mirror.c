#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        for(i = 0; av[1][i]; i++)
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                av[1][i] = 'n' - av[1][i] + 'm';
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                av[1][i] = 'N' - av[1][i] + 'M';   
            write (1, &av[1][i], 1);
        }
    }
    write (1, "\n", 1);
}