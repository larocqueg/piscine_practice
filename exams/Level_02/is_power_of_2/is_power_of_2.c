#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n && (n & n - 1) == 0);
	
}

int main() {
    unsigned int test_numbers[] = {1, 2, 3, 4, 8, 16, 18, 32, 64, 100};
    int size = sizeof(test_numbers) / sizeof(test_numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%u is %s\n", test_numbers[i], is_power_of_2(test_numbers[i]) ? "a power of 2" : "not a power of 2");
    }

    return 0;
}

