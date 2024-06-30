#include <stdio.h>
#include <string.h>

// This is a struct that contain names and every single name have it's age;
struct Person
{
	char name[50];
	int age;
};

int main()
{
	struct Person person;
	struct Person *p = &person;

	strcpy(p->name, "Gabriel");
	p->age = 22;

	printf("Name: %s\n", p->name);
	printf("Age: %d\n", p->age);

	return(0);
}
