#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int	tab[256] = {0};
	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[2][j] == av[1][i])
				{
					if (tab[(int)av[1][i]] == 0)
					{
						tab[(int)av[1][i]] = 1;
						write (1, &av[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
