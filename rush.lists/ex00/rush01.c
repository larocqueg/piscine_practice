/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larocqueg <larocqueg@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:28:36 by larocqueg         #+#    #+#             */
/*   Updated: 2024/07/19 22:22:20 by larocqueg        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_first_and_last(int i, int j, int x, int y)
{
	int	cllast;

	cllast = x - 1;
	if (i == 0)
	{
		if (j == 0)
			ft_putchar('/');
		if (j == cllast && j != 0)
			ft_putchar('\\');
		if (j != 0 && j != cllast)
			ft_putchar('*');
	}
	else
	{
		if (j == 0)
			ft_putchar('\\');
		if (j == cllast && j != 0)
			ft_putchar('/');
		if (j != 0 && j != cllast)
			ft_putchar('*');
	}
}

void	conditions(int i, int j, int x, int y)
{
	int	cllast;
	int	rwlast;

	cllast = x - 1;
	rwlast = y - 1;
	if (i == 0 || i == rwlast)
	{
		draw_first_and_last(i, j, x, y);
	}
	else
	{
		if (j == 0 || j == cllast)
			ft_putchar('*');
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
