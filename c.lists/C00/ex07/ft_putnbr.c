/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 16:04:03 by larocqueg         #+#    #+#             */
/*   Updated: 2024/09/07 19:19:46 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Simple function to implemment write in any part of my code
void    ft_putchar(char c)
{
        write(1, &c, 1); 
}

void    ft_putnbr(int nb)
{
	long n = nb;
	// Will print a '-' if the nbr has a negative value and convert it to 
	// positive
        if (n < 0)
        {       
                ft_putchar('-');
                n = -n;
        }
	// Will divide nbr by 10 so it becomes < 10 to be written on terminal
        if (n >= 10)
        	ft_putnbr(n / 10);
        ft_putchar((n % 10) + '0');
	return;
}

int     main(void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}

