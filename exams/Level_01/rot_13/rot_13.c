#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z'||
				av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] > 'm')
					av[1][i] -= 13;
				else
					av[1][i] += 13;
			}
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				if (av[1][i] > 'M')
					av[1][i] -= 13;
				else
					av[1][i] += 13;
			}
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
