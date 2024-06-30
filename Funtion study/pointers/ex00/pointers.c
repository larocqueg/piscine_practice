#include <stdio.h>

int	main(void)
{
	// num of int type of value 10
	int	num = 10;
	
	// Pointer of int type
	int *prt;

	// This gives the pointer prt the addreass of num
	prt = &num;

	// Prints the address of num using prt
	printf("Address of num: %p\n\n", prt);
	
	// Prints the value of num using pointer prt
	printf("Value of num: %d\n\n", *prt);
	
	// Changes the value of num using pointer prt
	*prt = 20;

	// Prints the modified value of num after changing its value with prt pointer
	printf("Modified value of num if: %d\n\n", num);

	return(0);
}

