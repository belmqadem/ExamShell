#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        char *s = av[1];
        int i = 0;
        int flag = 0;
        while (s[i] && (s[i] == ' ' || s[i] == '\t'))
            i++;
        while (s[i])
        {
            if (s[i] == ' ' || s[i] == '\t')
                flag = 1;
            if (s[i] != ' ' && s[i] != '\t')
            {
                if (flag == 1)
                    write (1, " ", 1);
                flag = 0;
                write (1, &s[i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
}
