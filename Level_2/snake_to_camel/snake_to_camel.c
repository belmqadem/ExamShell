#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    if (ac == 2)
    {
        char *s = av[1];
        while (s[i])
        {
            if (s[i] == '_')
                s[++i] -= 32;
            write (1, &s[i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}