/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 19:15:39 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/12 19:34:20 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			break ;
		nb++;
	}
	return (nb);
}
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);

	int nprime = ft_find_next_prime(n);

	if (n == nprime)
		printf("%i already is a prime number!\n", n);
	else
		printf("The next prime is: %i\n", nprime);
	return (0);
}
*/
