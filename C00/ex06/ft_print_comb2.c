/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:26:27 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/18 16:49:41 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		
		while (b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			b++;
		}
	}
}

int	main(void)
{
	ft_print_comb2();
}
