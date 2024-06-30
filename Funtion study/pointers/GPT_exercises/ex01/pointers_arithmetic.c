#include <stdio.h>

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int*p = arr;
	int i = 0;

	while(i < 5)
	{
		// As *p is pointing to arr[] values, *p++ is going to give me
		// all arr[] values;
		printf("arr[%d] = %d\n", i, *p++);
		i++;
	}
	return(0);
}
