/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:33:41 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/14 19:58:03 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int cl, int rw)
{
	int		i;
	int		j;
	int		rwlast;
	int		cllast;

	i = 0;
	rwlast = rw - 1;
	cllast = cl - 1;
	while (i < rw)
	{
		j = 0;
		while (j < cl)
		{
			if (i == 0 || i == rwlast)
			{
				if (j == 0 || j == cllast)
					write(1, "o", 1);
				else 
					write(1, "-", 1);
			}
			else
			{
				if (j == 0 || j == cllast)
					write(1, "|", 1);
				else
					write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(void)
{
	rush00(5,3);
	write(1, "\n", 1);
	rush00(5,1);
	write(1, "\n", 1);
	rush00(1,1);
	write(1, "\n", 1);
	rush00(1, 5);
	write(1, "\n", 1);
	rush00(4,4);
	return (0);
}
