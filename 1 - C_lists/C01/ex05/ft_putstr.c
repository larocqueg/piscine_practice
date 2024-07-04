/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:47:23 by larocqueg         #+#    #+#             */
/*   Updated: 2024/06/19 21:32:21 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str [length] != '\0')
		length++;
	write(1, str, length);
}
/*
int	main(void)
{
	char *message;

	message = "Hello, World!\n";
	ft_putstr(message);
	return 0;
}
*/

