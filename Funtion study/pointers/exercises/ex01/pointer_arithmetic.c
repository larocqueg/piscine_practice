#include <stdio.h>

int main(void)
{
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int *p = arr;
	int i = 0;

	while(i < 10)
		printf("arr[%d] = %d\n", i++, *p++);
	return(0);
}
