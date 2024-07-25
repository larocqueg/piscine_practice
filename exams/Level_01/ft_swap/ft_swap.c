//#include <stdio.h>

void	ft_swap(int	*a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int main()
{
    int a = 11;
    int b = 22;

    printf("Before swap: a = %d, b = %d\n", a, b);

    ft_swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
*/
