#include <stdio.h>

int main()
{
	const char *arr[]= {"Hello", "World", "Pointers", "in", "C"};
	int i = 0;

	while(i < 5)
		printf("String %d: %s\n", i, arr[i++]);
	return(0);
}
