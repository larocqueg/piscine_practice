/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 18:36:18 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/24 19:01:32 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

// Function used to print
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	a[10]; // Assuming n = 10

	if(n >= 0 && n <= 10)
	{
		i = 0;
	// This loop will inicialize the array puttin every digit from 0 to 9
		while(i < 10)
		{
			a[i] = i;
			i++;
		}
		int	b[10];
		i = 0;
		while(i < n)
		{
			b[i] = i;
			i++;
		}

		while(1)
		{
			i = 0;
			while(i < n)
			{
				ft_putchar(a[b[i]] + '0');
				i++;
			}
		// If the 1st nbr of the array is 8 it will break out of the loop
			if(b[0] == 10 - n)
				break;
		// If n = 2 or more it will print a comma and a empty space
			if(n > 1);
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}

int	main(void)
{
	ft_print_combn(2);
	return(0);
}
