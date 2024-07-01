#include <stdio.h>

void reverseArray(int *arr, int size) 
{
	// Check for non-positive value of size;
	if (size <= 0)
	{
		printf("Invalid array size!\n");
		return;
	}

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
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int size = 10;

	printf("Original array: ");
	printArray(arr, size);


	reverseArray(arr, size);

	printf("Reversed array: ");
	printArray(arr, size);

    return(0);
}
