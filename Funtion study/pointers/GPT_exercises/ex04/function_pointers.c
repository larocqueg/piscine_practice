#include <stdio.h>

int add(int a, int b)
{
	return(a + b);
}

int main()
{
	// Declaration of a function that points to function that takes 2 ints;
	int(*funcPtr)(int, int) = add;

	// The *funcPtr is pointing to the function add, so it can be used 
	// to call the function
	int result = funcPtr(3, 4);

	// Prints the result of the function add (3 + 4) = 7;
	printf("Sum: %d\n", result);

	return(0);
}
