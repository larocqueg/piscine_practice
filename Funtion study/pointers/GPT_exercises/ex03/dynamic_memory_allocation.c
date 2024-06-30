#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 5;

	// Allocate's memory for 'n' integers, in this case n = 5;
	int *arr = (int *)malloc(n * sizeof(int));

	if(arr == NULL)
	{
		printf("Memory allocation failed\n");
		return(1);
	}

	// Will give arr[i] a value, from 1 to n;
	int i = 0;
	while(i < n)
	{
		arr[i] = i + 1;
		i++;
	}

	i = 0;
	// Prints every arr[] value;
	while(i < n)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		i++;
	}

	// Frees the memory allocated by malloc;
	free(arr);
	return(0);
}
