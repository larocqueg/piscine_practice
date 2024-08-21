#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
    else if ((n & (n - 1)) == 0)
        return (1);
    return (0);
	
}

int main(int ac, char *av[])
{
    if (ac < 2) {
        printf("Please, provide an integer!.\n");
        return 1;
    }

    unsigned int x = atoi(av[1]);
    if (is_power_of_2(x) == 1)
        printf("%d is power of 2!\n", x);
    else 
        printf("%d is not power of 2!\n", x);
    
    return 0;
}
