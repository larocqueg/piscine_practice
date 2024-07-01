#include <stdio.h>

void reverseArray(int *arr, int size) 
{
	// Pointer to the arr start
	int *start = arr;

	// Pointer to the arr end
	int *end = arr + size - 1;

	// Temporary int to sort the array in reversed order
	int temp;

	// Swap elements from start and end until the pointers meet in the middle
	while (start < end) 
	{
		// Swap the elements pointed to by start and end
		temp = *start;
		*start = *end;
		*end = temp;

		// Move the pointers towards the middle
		start++;
		end--;
    	}
}

// Function to print the array 
void printArray(int *arr, int size) 
{
	int i = 0;

	while(i < size) 
		printf("%d ", arr[i++]);
	printf("\n");
}

int main() 
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int size = 10;

	printf("Original array: ");
	printArray(arr, size);


	reverseArray(arr, size);

	printf("Reversed array: ");
	printArray(arr, size);

    return(0);
}

