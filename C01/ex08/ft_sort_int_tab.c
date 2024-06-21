/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:57:33 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/21 18:50:10 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;

	while(i < size -1)
	{
		j = 0;
		while(j < size - 1 - i)
		{
			if(tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}	
}

int	main(void)
{
	int counter = 0;
	int arr[] = {5, 4, 3, 2, 1};
	int s = 5;

	printf("Before\n");
	while (counter < s)
		printf("%i ", arr[counter++]);	
	counter = 0;
	printf("\n");
	ft_sort_int_tab(arr, s);
	printf("After \n");
	while(counter <= s - 1)
		printf("%i ", arr[counter++]);
	printf("\n");
	return(0);
}
