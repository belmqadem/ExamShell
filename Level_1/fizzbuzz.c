#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
        write (1, &str[i++], 1);
}

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if (i % 3 == 0)
            ft_putstr("fizz");
        else if (i % 5 == 0)
            ft_putstr("buzz");
        else if (i >= 10)
        {
            ft_putchar(i / 10 + 48);
            ft_putchar(i % 10 + 48);
        }
        else
            ft_putchar(i + 48);
        ft_putchar('\n');
    }
    return 0;
}