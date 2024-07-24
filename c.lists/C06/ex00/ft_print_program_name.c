/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:02:06 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/24 13:17:59 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac >= 0)
	{
		while (av[0][i] != '\0')
		{
			write(1, &av[0][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
