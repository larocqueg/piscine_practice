#include <stdio.h>

int	fibonacci(int n)
{
	if(n == 0)
		return(0);
	if(n == 1)
		return(1);
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int	main(int argc, char *argv[])
{
	int i;
	printf("Type a number >= 1: ");
	scanf("%i", &i);
	printf("The fibonacci of %i is  = %i\n", i, fibonacci(i));
	return(0);
}
