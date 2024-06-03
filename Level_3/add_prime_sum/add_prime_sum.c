#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int r = 0;
	int i = 0;

	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + str[i] - 48;
		i++;
	}
	return (r);
}

void    ft_putchar(char c)
{
	write (1, &c, 1);
}

void    ft_putnbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + 48);
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{	int nb = ft_atoi(av[1]);
		int sum = 0;
		while (nb > 0)
		{
			if (ft_is_prime(nb))
				sum += nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	write (1, "\n", 1);
}