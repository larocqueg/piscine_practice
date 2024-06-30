#include <stdio.h>

int main()
{
	int a = 20;

	int *p = &a;

	int **pp = &p;

	printf("Value of a: %d\n", a);

	// P has a's address as it's value;
	printf("Value of p: %p\n", (void *)p);

	printf("Value pointed by p: %d\n", *p);

	// pp has p's address as it's value;
	printf("Value of pp: %p\n", (void *)pp);

	printf("Value pointed by pp: %p\n", (void *)*pp);

	printf("Value pointed by the pointer pointed by pp: %d\n", **pp);

	return(0);
}
