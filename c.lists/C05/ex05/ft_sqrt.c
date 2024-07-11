/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:34:53 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/11 22:21:59 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);

	int nsqrt = ft_sqrt(n);
	printf("squereroot of %i is: %i\n", n, nsqrt);	
}
*/
