#include <stdio.h>

int main(void)
{
	int n = 10;
	int *p = &n;

	printf("Original value: %d\n", n);
	
	*p += 10;

	printf("Added 10 to the original value\n");

	printf("Modified value: %d\n", *p);

	return(0);
}
