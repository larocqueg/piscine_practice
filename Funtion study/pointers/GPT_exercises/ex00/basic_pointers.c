#include <stdio.h>

int main(void)
{
	int a = 10;

	// *p is a pointer to a;
	int *p = &a;
	
	// Using only the variable 'a' i'm working with 'a' actual value;
	printf("Value of a: %d\n", a);

	// Using "&a" i'm working with 'a' memory addres in hexadecimal;
	printf("Address of a: %p\n", &a);

	// As 'p' is a pointer to 'a', it;s value is == 'a' address;
	printf("Value of p: %p\n", p);

	// Using *p i'm manipulating a's value;
	printf("Value pointed by p: %d\n", *p);

	return(0);
}
