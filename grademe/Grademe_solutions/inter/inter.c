/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int	ft_exist(char let, char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == let)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char *av[])
{
	if (ac == 3)
	{
		int i = 0;
		char *a = av[1];
		char *b = av[2];
		char result[256] = {0};

		while (a[i] != '\0')
		{
			if (ft_exist(a[i], b) == 1 && ft_exist(a[i], result) == 0)
			{
				result[i] = a[i];
				write(1, &result[i], 1);
			}
			i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}
