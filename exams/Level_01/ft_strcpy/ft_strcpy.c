#include <unistd.h>


void	ft_putstr(char *c)
{
	while (*c)
		write(1, c++, 1);
}


char	*ft_strcpy(char *a, char *b)
{
	int	i;

	i = 0;
	while (b[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}


int	main(int ac, char *av[])
{
	char b[20];
	
	if (ac == 2)
	{
		ft_putstr(ft_strcpy(b, av[1]));
		ft_putstr("\n");
	}
	return (0);
}

