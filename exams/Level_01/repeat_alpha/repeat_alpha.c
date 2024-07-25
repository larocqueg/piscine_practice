#include <unistd.h>

int	main(int ac, char *av[])
{
	int i = 0;
	int counter = 0;

	if(ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				counter = (av[1][i] - 'a') + 1;
				while(counter > 0)
				{
					write(1, &av[1][i], 1);
					counter --;
				}
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				counter =(av[1][i] - 'A') + 1;
				while(counter > 0)
				{
					write(1, &av[1][i], 1);
					counter --;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}			
		
	}
	write(1, "\n", 1);
}

