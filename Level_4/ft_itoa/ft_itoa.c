#include <stdlib.h>

int count_digit(long nbr)
{
    int count = 0;
    if (nbr == 0)
        count++;
    if (nbr < 0)
    {
        count++;
        nbr *= -1;
    }
    while (nbr > 0)
    {
        count++;
        nbr /= 10;
    }
    return count;
}

char	*ft_itoa(int nbr)
{
    long number = nbr;
    int count = count_digit(number);
    char *n = (char *)malloc((count + 1) * sizeof(char));
    if (!n)
        return NULL;
    if (number < 0)
    {
        n[0] = '-';
        number *= -1;
    }
    if (number == 0)
        n[0] = '0';
    n[count] = '\0';
    while (number)
    {
        n[count - 1] = number % 10 + 48;
        count--;
        number /= 10;
    }
    return n;
}
