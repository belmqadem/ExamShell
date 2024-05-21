#include <unistd.h>

void    repeat_alpha(char *str)
{
    int i;
    int count;
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count = str[i] - 'a' + 1;
            while (count-- > 0)
                write(1, &str[i], 1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count = str[i] - 'A' + 1;
            while (count-- > 0)
                write(1, &str[i], 1);
        }
        else
            write (1, &str[i], 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}