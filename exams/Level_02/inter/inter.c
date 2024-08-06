#include <unistd.h>

int	ft_exist(char let, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == let)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int 	i;
		int		j;
		char	*a;
		char	*b;
		char	result[256];

		i = 0;
		j = 0;
		a = av[1];
		b = av[2];
		while (a[i] != '\0')
		{
			if (ft_exist(a[i], b) == 1 && ft_exist(a[i], result) == 0)
			{
				result[j++] = a[i];
				write(1, &a[i], 1);
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
