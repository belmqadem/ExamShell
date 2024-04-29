#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nbr = atoi(av[1]);
		int i = 1;
		if (nbr == 1)
			printf("1");
		while (nbr >= ++i)
		{
			if (nbr % i == 0)
			{
				printf("%d", i);
				if (nbr == i)
					break;
				printf("*");
				nbr /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}
