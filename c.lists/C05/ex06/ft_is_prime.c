/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:22:44 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/12 19:13:16 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int ft_is_prime(int nb)
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
/*
int	main(int ac, char *av[])
{
	int n = atoi(av[1]);

	int nprime = ft_is_prime(n);

	if (nprime == 1)
		printf("%i is prime!\n", n);
	else
		printf("%i is not prime!\n", n);
	return (0);
}
*/
