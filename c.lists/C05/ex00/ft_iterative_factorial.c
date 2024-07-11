/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:56:06 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/11 18:29:14 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		factorial *= nb--;
	return (factorial);
}
/*
int	main(int argc, char *argv[])
{
	int n = atoi(argv[1]);

	int nb = ft_iterative_factorial(n);

	printf("THe factorial of %i is: %i\n", n, nb);
}
*/
