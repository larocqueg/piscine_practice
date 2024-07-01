/*======================================./2-0-ft_strdup.txt==================================
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
==========================================================================================*/

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int i = 0;
	while(src[i] != '\0')
		i++;
	
	char *mod = malloc(i *(sizeof(char)));

	i = 0;	
	while(src[i] != '\0')
	{
		mod[i] = src[i];
		i++; 
	}
	return(mod);
}

int	main(void)
{
	char source[] = "Hello 42, My name is Gabriel!";
	char *new = ft_strdup(source);

	// Prints the original str
	printf("Source str is: %s\n", source);

	// Prints the modified str
	printf("Modified str: %s\n", new);

	// Frees memory back to the system
	free(new);

	return(0);
}
