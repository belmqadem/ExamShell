#include <unistd.h>

int ft_atoi(const char *str)
{
    int r = 0;
    int s = 1;
    int i = 0;
    while (str[i] && ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r')))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + str[i] - 48;
        i++;
    }
    return (s * r);
}
