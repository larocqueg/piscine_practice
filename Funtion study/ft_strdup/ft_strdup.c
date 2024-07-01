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

	// Checks if src is NULL
	if (src == NULL)
		return(NULL);

	// Calculates str length
	while (src[i] != '\0')
		i++;

	// Allocate memory for the dup string
	char *dup = malloc((i + 1) * sizeof(char));
	

	// Check if memory allocation was successful
	if (dup == NULL)
		return(NULL);

	i = 0;
	// Copy the src to the dup string
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	// Puts a Null-terminator in dup string
	dup[i] = '\0';
	
	return(dup);
}

int	main(void)
{
	char source[] = "Hello 42, My name is Gabriel!";
	char *new = ft_strdup(source);

	// Prints the original str
	printf("Source str is: %s\n", source);

	// Cheks if memory allocation was successful
	if(new == NULL)
	{
		printf("Memory allocation failed\n");
		return(1);
	}

	// Prints the Duplicated str
	printf("Modified str: %s\n", new);

	// Frees memory back to the system
	free(new);

	return(0);
}
