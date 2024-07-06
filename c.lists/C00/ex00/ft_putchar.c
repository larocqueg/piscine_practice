/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:31:18 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/17 18:32:34 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int main(int argc, char *argv[])
{
	int i = 0;

	while(argv[1][i] != '\0')
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return(0);
}
*/
