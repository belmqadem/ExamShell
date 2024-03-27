#include <unistd.h>

int ft_atoi(char *str)
{
    int r = 0, i = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + str[i] - 48;
        i++;
    }
    return r;
}

void    print_hex(int nbr)
{
    char hex[] = "0123456789abcdef";
    if (nbr >= 16)
        print_hex(nbr / 16);
    write (1, &hex[nbr % 16], 1);
}


int main(int ac, char **av)
{
    int nbr;
    if (ac == 2)
    {
        nbr = ft_atoi(av[1]);
        print_hex(nbr);
    }
    write (1, "\n", 1);
}