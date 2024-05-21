#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	if (ac == 2)
	{
		for (i = 0; av[1][i]; i++)
		{
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
				write (1, "_", 1);
			}
			write(1, &av[1][i], 1);
		}
	}
	write (1, "\n", 1);
}