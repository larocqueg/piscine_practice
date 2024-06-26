#include <stdio.h>

int	sum_of_range(int n)
{
	int res;
	if(n == 1)
		return(1);
	else
		res = n + sum_of_range(n - 1);
	return(res);	
}

int	main(int argc, char *argv[])
{
	int i;
	int sum;
	printf("Tipe a number >= 1: ");
	scanf("%i", &i);
	printf("The sum of all digits from 1 to %i is = %i\n",  i, sum_of_range(i));
	return(0);
}
