#include <unistd.h>

void    rotone(char c)
{
    if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
        c++;
    else if (c == 'z' || c == 'Z')
        c -= 25;
    write (1, &c, 1);
}

int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        for (i = 0; av[1][i]; i++)
            rotone(av[1][i]);
    }
    write (1, "\n", 1);
}