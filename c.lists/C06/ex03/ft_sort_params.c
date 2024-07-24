/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:34:16 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/24 17:26:33 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function to print a string of characters
void	ft_putstr(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c++;
	}
}

// Function to swap 2 strings
void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// Function to compare 2 strings character by character
int	ft_strcmp(char *a, char *b)
{
	while (*a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

// Function to see if the strings are in correct ascii order
void	ft_sort_condition(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(av[i], av[j]) > 0)
				ft_swap(&av[i], &av[j]);
			j++;
		}
		i++;
	}
}

int	main(int ac, char *av[])
{
	int	i;

	if (ac > 1)
	{
		ft_sort_condition(ac, av);
		i = 1;
		while (i < ac)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
