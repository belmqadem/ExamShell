#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    if (ac == 2)
    {
        for (i = 0; av[1][i]; i++)
        {
            char c = av[1][i];
            if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
                c += 13;
            else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
                c -= 13;
            write (1, &c, 1);
        }
    }
    write (1, "\n", 1);
    return 0;
}