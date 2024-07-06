/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:45:28 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/06 21:59:57 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long i = nb;
	if (i < 0)
	{
		i = -i;
		ft_putchar('-');
	}
	if (i > 9)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
/*
int	main(void)
{
	int	i;

	i = 100702;

	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}
*/
