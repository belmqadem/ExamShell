#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char *s1 = av[1];
        char *s2 = av[2];
        int i = 0;
        int j;
        char c = '\0';
        while (s1[i])
        {
            j = 0;
            if (s1[i] == c)
                i++;
            while (s2[j])
            {
                if (s1[i] == s2[j])
                {
                    write (1, &s1[i], 1);
                    c = s1[i];
                    break ;
                }
                j++;
            }
            i++;
        }
    }
    write (1, "\n", 1);
}