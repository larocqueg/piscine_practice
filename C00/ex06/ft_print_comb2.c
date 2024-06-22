/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:26:27 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/22 14:21:52 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	char	a[5];

	i = 0;
	while(i <= 98)
	{
		j = i + 1;
		while(j <= 99)
		{
			a[0] = '0' + (i / 10);
			a[1] = '0' + (i % 10);
			a[2] = ' ';
			a[3] = '0' + (j / 10);
			a[4] = '0' + (j % 10);
			write(1, &a, 5);
			if(i != 98 || j != 99)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return 0;
}
*/
