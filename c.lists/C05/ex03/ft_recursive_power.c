/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:20:31 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/11 21:12:55 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
	
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);
	int p = atoi(av[2]);

	int np = ft_recursive_power(n, p);

	printf("%i powered by %i = %i\n", n, p, np);
	return (0);
}
*/
