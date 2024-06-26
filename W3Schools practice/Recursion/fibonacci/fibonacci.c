#include <stdio.h>

int	fibonacci(int n)
{	
	if(n == 1 || n == 2)
		return(1);
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int	main(int argc, char *argv[])
{
	int i = 1;
	int num = 10;
	printf("Fibonacci:\n");
	while(i <= num)
	{
		printf("%i --> %i\n", i, fibonacci(i));
		i++;
	}
	return(0);
}
