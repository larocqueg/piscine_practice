#include <unistd.h>

void	ft_putstr(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

/*int	main(int ac, char *av[])
{
	if (ac == 2)
	{
		ft_putstr(av[1]);
		ft_putstr("\n");
	}
	return (0);
}
*/
