#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i;
	int j;
	char temp;

	j = 0;
	while (str[j])
		j++;
	j -= 1;
	i = 0;
	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return(str);
}

int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%s", ft_strrev(av[1]));
	printf("\n");
	return (0);

}
