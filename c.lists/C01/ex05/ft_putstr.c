/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 20:47:23 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/04 20:10:42 by larocqueg        ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	char *message;

	message = argv[1];
	ft_putstr(message);
	return 0;
}
