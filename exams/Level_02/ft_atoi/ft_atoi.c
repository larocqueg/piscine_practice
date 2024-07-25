//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int result = 0;
	int sign = 1;

	if(*str < 32)
		str++;	
	if(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	
	return(sign * result);
}

/*
int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 2)
		printf("%i", ft_atoi(av[1]));
	printf("\n");
	return (0);
}
*/
