#include <stdio.h>

void	print_array(int arr[], int size, int index)
{
	index = 0;
	
	if(index < size)
	{
		printf("%d ", arr[index])
		print_array(arr, size, index + 1);
	}
	return(0);
}

int main(void)
{
	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &n);

	int array[n];

	
}
