int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return 1;
	else
		return 0;
}

#include <stdio.h>
int main()
{
	int n = 9;
	if (is_power_of_2(n))
		printf("ok\n");
	else
		printf("no\n");
}