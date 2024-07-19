/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 15:04:35 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/19 21:56:08 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	conditions(int i, int j, int x, int y)
{
	int		rwlast;
	int		cllast;

	cllast = x - 1;
	rwlast = y - 1;
	if (i == 0 || i == rwlast)
	{
		if (j == 0)
			ft_putchar('o');
		if (j == cllast && j != 0)
			ft_putchar('o');
		else if (j != 0 && j != cllast)
			ft_putchar('-');
	}
	else
	{
		if (j == 0 || j == cllast)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			conditions(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
