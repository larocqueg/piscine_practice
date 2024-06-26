#include <stdio.h>

int	recursion(int n)
{
	if (n == 50)
	{
		printf("%i\n", n);
		return(0);
	}
	printf("%i, ", n);
	recursion(n + 1);
	
}

int	main(void)
{
	int number = 1;
	recursion(number);
	return(0);
}
