/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:24:43 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/11 20:14:22 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	int nb = ft_recursive_factorial(n);

	printf("The factorial of %i is: %i\n", n, nb);
}
*/
