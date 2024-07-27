//#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	return(i);
}
/*
int	main(void)
{
	const char *a = "abcde";
	const char *b = "efghe";

	printf("%ld\n", ft_strcspn(a, b));
	return (0);
}
*/
