//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(*s1)
	{
		i++;
		s1++;
	}
	while(*s2)
	{
		j++;
		s2++;
	}
	if (i == j)
		return (0);
	else if (i < j)
		return (-1);
	else if (i > j)
		return (1);
}
/*
int	main(int ac, char *av[])
{
	if (ac == 3)
		printf("%d", ft_strcmp(av[1], av[2]));
	printf("\n");
	return (0);
}
*/
